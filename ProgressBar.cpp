//
// Created by matteo on 23/02/17.
//

#include "ProgressBar.h"


void ProgressBar::update(FilesQueue *fq) {
    fq->removeFileFromQueue();
    m_gauge1->SetValue((m_gauge1->GetValue() + 1) );
    wxYield();
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void FilesQueue::notify() {
    for (auto &itr : attachedObs) {
        itr->update(this);
    }
}

void FilesQueue::addFileToQueue(ResourceFile &file) {
    queue.push_front(file);
    size += file.getSize();
    if (!attachedObs.empty()) {
        notify();
    }

}

void FilesQueue::removeFileFromQueue() {
    auto p = queue.begin();
    size -= p->getSize();
    queue.pop_front();

}


