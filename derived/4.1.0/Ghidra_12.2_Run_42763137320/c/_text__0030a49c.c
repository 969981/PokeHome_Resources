/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030a49c; name: FUN_.text__0030a49c
 */


undefined8 FUN__text__0030a49c(long *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_88 [48];
  long local_58;
  undefined4 *local_38;
  
  lVar5 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x50));
  if (DAT_008e1540 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__005da7f0(auStack_88,DAT_008e1540,lVar5 + 0x180,*(undefined8 *)(lVar5 + 400));
  *(undefined1 *)(lVar5 + 0x20c) = 0;
  iVar2 = FUN__text__005dd608(auStack_88);
  *(int *)(lVar5 + 0x208) = iVar2;
  if (((iVar2 - 1U < 2) &&
      (uVar3 = nn::fs::IsSaveDataExisting(*(undefined8 *)(lVar5 + 400),lVar5 + 0x180),
      (uVar3 & 1) != 0)) && (*(code **)(lVar5 + 0x2a0) != (code *)0x0)) {
    local_38 = (undefined4 *)(lVar5 + 0x210);
    bVar1 = (**(code **)(lVar5 + 0x2a0))(lVar5 + 0x2c0,auStack_88,&local_38);
    *(byte *)(lVar5 + 0x20c) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      *(undefined4 *)(lVar5 + 0x210) = 0;
    }
  }
  pcVar4 = *(code **)(lVar5 + 0x2a8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2b8) = 0;
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    *(undefined8 *)(lVar5 + 0x2a0) = 0;
    (*pcVar4)(lVar5 + 0x2c0);
  }
  FUN__text__005daa98(DAT_008e1540,auStack_88);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50));
  return 1;
}


