/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016bfb0; name: FUN_.text__0016bfb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016bfb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_38;
  
  FUN__text__001191f4(*_DAT_0089f4e8);
  lVar4 = DAT_008e14b8;
  lVar2 = *(long *)(DAT_008e14b8 + 0x260);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = FUN__text__003628e8(lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(lVar4 + 0x260);
    uVar3 = *(undefined8 *)(DAT_008e1518 + 8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN__text__00361e98(lVar2,uVar3);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    lVar2 = *(long *)(lVar4 + 0x260);
    while( true ) {
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      uVar1 = FUN__text__003628e8(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      if ((uVar1 & 1) != 0) break;
      nn::os::SleepThread(1000000);
      lVar2 = *(long *)(lVar4 + 0x260);
    }
    lVar4 = *(long *)(lVar4 + 0x260);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__00362980(lVar4,uVar3);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN__text__0030d5a0(&local_38);
  lVar4 = *(long *)(local_38 + 0x80);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__0030afe4(lVar4,*(undefined8 *)(DAT_008e1518 + 8));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x50) + 0x18))();
  }
  FUN__text__002b1fb0(&local_38,DAT_008e1610);
  uVar1 = FUN__text__002a86f4(local_38);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(DAT_008e1518 + 8);
    FUN__text__002a7ea0(local_38,uVar3);
    uVar1 = FUN__text__002a86f4(local_38);
    while ((uVar1 & 1) == 0) {
      nn::os::SleepThread(1000000);
      uVar1 = FUN__text__002a86f4(local_38);
    }
    FUN__text__002a8780(local_38,uVar3);
  }
  *(long *)(*_DAT_008a1468 + 0x90) = param_1 + 0x458;
  FUN__text__00320200();
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


