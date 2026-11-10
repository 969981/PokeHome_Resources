/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011ad04; name: FUN_.text__0011ad04
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__0011ad04(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  SixAxisSensorHandle *pSVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  SixAxisSensorHandle *pSVar7;
  
  if (*(int *)(param_1 + 0x3c) == param_2) {
    return;
  }
  pSVar7 = (SixAxisSensorHandle *)(param_1 + 0x18);
  *(undefined8 *)pSVar7 = 0;
  *(int *)(param_1 + 0x3c) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 - 1U < 5) {
    uVar5 = *(undefined8 *)((long)(int)(param_2 - 1U) * 8 + 0x7217c8);
  }
  else {
    uVar5 = 2;
  }
  iVar3 = nn::hid::GetSixAxisSensorHandles(pSVar7,8,param_1 + 8,uVar5);
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(long *)(param_1 + 0x10) = (long)iVar3;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar6 = 0;
    if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) {
      nn::hid::StopSixAxisSensor(pSVar7);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
    if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) {
      nn::hid::StartSixAxisSensor(pSVar7);
      uVar6 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = uVar6;
  uVar1 = *(int *)(param_1 + 0x3c) - 3;
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (uVar1 < 2) {
      nn::hid::StopSixAxisSensor(pSVar7);
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
    iVar3 = *(int *)(param_1 + 0x3c);
    cVar2 = *(char *)(param_1 + 0x3a);
  }
  else {
    if (uVar1 < 2) {
      nn::hid::StartSixAxisSensor(pSVar7);
    }
    *(undefined1 *)(param_1 + 0x39) = 1;
    iVar3 = *(int *)(param_1 + 0x3c);
    cVar2 = *(char *)(param_1 + 0x3a);
  }
  if (cVar2 != '\0') {
    pSVar4 = pSVar7;
    if (iVar3 != 5) {
      if (iVar3 != 3) {
        *(undefined1 *)(param_1 + 0x3a) = 1;
        iVar3 = *(int *)(param_1 + 0x3c);
        cVar2 = *(char *)(param_1 + 0x3b);
        goto joined_r0x0011aee0;
      }
      pSVar4 = (SixAxisSensorHandle *)(param_1 + 0x1c);
    }
    nn::hid::StartSixAxisSensor(pSVar4);
    *(undefined1 *)(param_1 + 0x3a) = 1;
    iVar3 = *(int *)(param_1 + 0x3c);
    cVar2 = *(char *)(param_1 + 0x3b);
    goto joined_r0x0011aee0;
  }
  pSVar4 = pSVar7;
  if (iVar3 == 5) {
LAB__text__0011ae8c:
    nn::hid::StopSixAxisSensor(pSVar4);
  }
  else if (iVar3 == 3) {
    pSVar4 = (SixAxisSensorHandle *)(param_1 + 0x1c);
    goto LAB__text__0011ae8c;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar3 = *(int *)(param_1 + 0x3c);
  cVar2 = *(char *)(param_1 + 0x3b);
joined_r0x0011aee0:
  if (cVar2 == '\0') {
    if (iVar3 == 2) {
      nn::hid::StopSixAxisSensor(pSVar7);
    }
    uVar6 = 0;
  }
  else {
    if (iVar3 == 2) {
      nn::hid::StartSixAxisSensor(pSVar7);
    }
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x3b) = uVar6;
  return;
}


