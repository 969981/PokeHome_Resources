/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067757c; name: FUN_.text__0067757c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0067757c(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if ((DAT_00c5f61c & 1) == 0) {
    DAT_00c5f61d._0_7_ = _DAT_00721408;
    DAT_00c5f61d._7_1_ = DAT_0072140f;
    uRam0000000000c5f625 = uRam0000000000721410;
    sVar2 = strlen((char *)&DAT_00c5f61d);
    puVar6 = (undefined1 *)((long)&DAT_00c5f61d + sVar2);
    uVar5 = 200 - sVar2;
    if ((1 < uVar5) && (lVar3 = FUN__text__00677db0(sVar2 + 0xc5f61e,199 - sVar2), lVar3 != 0)) {
      *puVar6 = 0x20;
      uVar5 = uVar5 - (lVar3 + 1);
      puVar6 = puVar6 + lVar3 + 1;
    }
    uVar4 = FUN__text__006891e0();
    iVar1 = FUN__text__006599c0(puVar6,uVar5,0x70dfc6,uVar4);
    FUN__text__00661a24(puVar6 + iVar1,uVar5 - (long)iVar1);
    DAT_00c5f61c = 1;
  }
  return &DAT_00c5f61d;
}


