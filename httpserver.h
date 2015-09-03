#if 0
# 
# Copyright (c) 2014 - 2015 Javier Sayago <admin@lonasdigital.com>
# Contact: javilonas@esp-desarrolladores.com
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#endif

extern struct config_data cfg;
extern struct program_data prg;

extern int END_PROCESS;

char *getchname(uint16 caid, uint32 prov, uint16 sid );

void *http_thread(void *param);

int start_thread_http();

