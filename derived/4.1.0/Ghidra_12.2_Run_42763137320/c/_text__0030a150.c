/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a150; name: FUN_.text__0030a150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0030a150(long *param_1)

{
  MutexType *pMVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_90 [48];
  long local_60;
  int *local_28;
  
  plVar4 = _DAT_0089f550;
  if (*_DAT_0089f550 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar9 = *param_1;
  cVar2 = *(char *)(lVar9 + 0x214);
  cVar3 = *(char *)(lVar9 + 0x215);
  FUN__text__005da7f0(auStack_90,*_DAT_0089f550,lVar9 + 0x180,*(undefined8 *)(lVar9 + 400));
  pMVar1 = (MutexType *)(lVar9 + 0x50);
  nn::os::LockMutex(pMVar1);
  uVar6 = FUN__text__005dd608(auStack_90);
  *(undefined4 *)(lVar9 + 0x208) = uVar6;
  nn::os::UnlockMutex(pMVar1);
  if (*(int *)(lVar9 + 0x208) - 1U < 2) {
    pcVar8 = *(code **)(lVar9 + 0x220);
  }
  else {
    if ((*(int *)(lVar9 + 0x208) != 3) || (cVar3 == '\0')) goto LAB__text__0030a264;
    iVar7 = FUN__text__005dd648(auStack_90,*(undefined8 *)(lVar9 + 400));
    *(int *)(lVar9 + 0x210) = iVar7;
    if (iVar7 != 0) goto LAB__text__0030a264;
    *(undefined4 *)(lVar9 + 0x208) = 2;
    pcVar8 = *(code **)(lVar9 + 0x220);
  }
  if (pcVar8 != (code *)0x0) {
    local_28 = (int *)(lVar9 + 0x210);
    bVar5 = (*pcVar8)(lVar9 + 0x240,auStack_90,&local_28);
    *(byte *)(lVar9 + 0x20c) = bVar5 & 1;
    if (((bVar5 & 1) != 0) && (*(int *)(lVar9 + 0x210) == 0)) {
      if (cVar2 != '\0') {
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1d8));
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1e4));
        if (*(char *)(lVar9 + 0x1f0) != '\0') goto LAB__text__0030a264;
      }
      nn::os::LockMutex(pMVar1);
      iVar7 = FUN__text__005dd758(auStack_90);
      *(int *)(lVar9 + 0x210) = iVar7;
      *(bool *)(lVar9 + 0x20c) = iVar7 == 0;
      nn::os::UnlockMutex(pMVar1);
    }
  }
LAB__text__0030a264:
  pcVar8 = *(code **)(lVar9 + 0x228);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x238) = 0;
    *(undefined8 *)(lVar9 + 0x230) = 0;
    *(undefined8 *)(lVar9 + 0x228) = 0;
    *(undefined8 *)(lVar9 + 0x220) = 0;
    (*pcVar8)(lVar9 + 0x240);
  }
  FUN__text__005daa98(*plVar4,auStack_90);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return 1;
}


