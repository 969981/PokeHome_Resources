/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8cd8; name: FUN_.text__005a8cd8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8cd8(long param_1,void *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_58;
  undefined4 local_4c;
  long local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  memcpy((void *)(param_1 + 0x50),param_2,0xa0);
  *(int *)(param_1 + 0x8588) = *(int *)(param_1 + 0x70);
  uVar3 = (uint)(*(int *)(param_1 + 0x70) != 0);
  *(uint *)(param_1 + 0x8598) = uVar3;
  *(uint *)(param_1 + 0x859c) = uVar3;
  nn::os::GetSystemTick();
  uVar1 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  FUN__text__005a8fbc(param_1);
  FUN__text__005a93c0(*(undefined8 *)(param_1 + 8));
  FUN__text__005a94f4(*(undefined8 *)(param_1 + 8),param_1 + 0xa8);
  FUN__text__005a9634(*(undefined8 *)(param_1 + 8));
  FUN__text__005ab36c(*(undefined8 *)(param_1 + 8));
  FUN__text__005a9788(param_1);
  local_48 = 0;
  uStack_40 = 0;
  FUN__text__006ebe38(&local_48);
  uVar1 = _DAT_008a0448;
  FUN__text__006f5618(param_1 + 0x4208,_DAT_008a0448,&local_48);
  FUN__text__006f5618(param_1 + 0x4260,uVar1,&local_48);
  if (*(char *)((long)param_2 + 0x5c) == '\0') {
    lVar5 = *_DAT_0089fd80;
    lVar2 = FUN__text__0010feac(&local_48,*(undefined8 *)(lVar5 + 8));
  }
  else {
    FUN__text__005a99c4(&local_48,*(undefined8 *)(param_1 + 8),(long)param_2 + 0x60);
    if (*(long *)(param_1 + 0x168) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x168) = local_48;
    *(undefined8 *)(local_48 + 0x98) = 0x3e99999a00000000;
    *(undefined8 *)(local_48 + 0xa0) = 0x3f8000003f800000;
    lVar5 = *_DAT_0089fd80;
    local_48 = param_1;
    lVar2 = FUN__text__005ab5d0(&local_58,*(undefined8 *)(lVar5 + 8),&local_48);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(ulong *)(lVar2 + 0x130) = *(ulong *)(lVar2 + 0x130) | 0x20;
  if (*(long *)(lVar5 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + 0x48) + 0x18))();
  }
  *(long *)(lVar5 + 0x50) = lVar2;
  local_48 = 0x10;
  local_4c = 2;
  local_58 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  lVar5 = FUN__text__005abb5c(&uStack_31,*(undefined8 *)(param_1 + 8),&local_48,&local_4c,&local_58)
  ;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x1d8) = lVar5;
  lVar5 = FUN__text__005abdcc(&local_48,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x8580) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8580) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x8580) = lVar5;
  pcVar4 = *(code **)(param_1 + 0x84f8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x8500) = 0;
    *(undefined8 *)(param_1 + 0x8508) = 0;
    *(undefined8 *)(param_1 + 0x84f0) = 0;
    *(undefined8 *)(param_1 + 0x84f8) = 0;
    (*pcVar4)(param_1 + 0x8510);
  }
  *(undefined8 *)(param_1 + 0x84f0) = FUN__text__005ace14;
  *(undefined **)(param_1 + 0x84f8) = &DAT__text__005ace4c;
  *(undefined1 **)(param_1 + 0x8500) = &LAB__text__005ace50;
  *(undefined1 **)(param_1 + 0x8508) = &LAB__text__005ace5c;
  *(long *)(param_1 + 0x8510) = param_1;
  FUN__text__005df194(*_DAT_0089ff88,3,param_1 + 0x84e0);
  lVar5 = FUN__text__005abdcc(&local_48,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x8590) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8590) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x8590) = lVar5;
  return;
}


