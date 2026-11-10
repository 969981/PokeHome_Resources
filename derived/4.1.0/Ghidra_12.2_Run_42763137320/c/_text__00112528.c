/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00112528; name: FUN_.text__00112528
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00112528(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  uVar4 = FUN__text__003230b0();
  if ((int)uVar4 < 0xb) {
    FUN__text__0016a6c0(uVar4,*(undefined8 *)(DAT_008e1518 + 0x2a8));
  }
  else {
    uVar4 = FUN__text__0016a510();
    FUN__text__0016ad94(uVar4,0);
    FUN__text__003230d0();
  }
  puVar1 = _DAT_0089f598;
  uVar4 = *_DAT_0089f598;
  local_68 = 0xc973b2050f4a2ee4;
  uStack_60 = 0x71d7fc;
  local_58 = 0x10;
  FUN__text__005e927c(auStack_50,&local_68);
  iVar3 = FUN__text__00323120();
  lVar2 = _DAT_0089fcc8;
  FUN__text__003ef578(*(undefined4 *)(_DAT_0089fcc8 + (long)iVar3 * 4),uVar4,auStack_50,
                      0xffffffffffffffff,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar4 = *puVar1;
  local_68 = 0x3ccddbd390fe0e0e;
  uStack_60 = 0x71258b;
  local_58 = 0xf;
  FUN__text__005e927c(auStack_50,&local_68);
  iVar3 = FUN__text__00323170();
  FUN__text__003ef578(*(undefined4 *)(lVar2 + (long)iVar3 * 4),uVar4,auStack_50,0xffffffffffffffff,0
                     );
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


