/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005da170; name: FUN_.text__005da170
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005da170(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  if (*(int *)(param_1 + 0x13c) - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,0);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    iVar1 = *(int *)(param_1 + 0x140);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x140);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,1);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x140) = 0;
    iVar1 = *(int *)(param_1 + 0x144);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x144);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,2);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x144) = 0;
    iVar1 = *(int *)(param_1 + 0x148);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x148);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,3);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x148) = 0;
    iVar1 = *(int *)(param_1 + 0x14c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14c);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,4);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x14c) = 0;
    iVar1 = *(int *)(param_1 + 0x150);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x150);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,5);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x150) = 0;
    iVar1 = *(int *)(param_1 + 0x154);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x154);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,6);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x154) = 0;
    iVar1 = *(int *)(param_1 + 0x158);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x158);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,7);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x158) = 0;
    iVar1 = *(int *)(param_1 + 0x15c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15c);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,8);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    iVar1 = *(int *)(param_1 + 0x160);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x160);
  }
  if (iVar1 - 1U < 2) {
    snprintf((char *)&local_60,0x10,(char *)0x71349f,9);
    nn::fs::Unmount((char *)&local_60);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  nn::fs::Unmount((char *)0x757d35);
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0xcbf29ce484222645;
  local_38 = 0;
  local_50 = 0x70f683;
  local_48 = 0;
  FUN__text__00168178(_DAT_0089f558,&local_60);
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  uStack_58 = 0xcbf29ce484222645;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  DAT_00b11240 = 0;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1b0));
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x120));
  plVar2 = (long *)*(long *)(param_1 + 0xf0);
  while (plVar2 != (long *)0x0) {
    lVar3 = plVar2[4];
    plVar2[4] = 0;
    lVar4 = *plVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar2[5] + 0x18))((long *)plVar2[5],lVar3,plVar2[6],plVar2[7]);
    }
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))(*(long **)(param_1 + 0xf8),plVar2,0x40,8);
    plVar2 = (long *)lVar4;
  }
  lVar3 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar3 != 0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),lVar3,*(long *)(param_1 + 0xd0) << 3,8);
  }
  FUN__text__005daf40(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar3 != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),lVar3,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
  }
  return;
}


