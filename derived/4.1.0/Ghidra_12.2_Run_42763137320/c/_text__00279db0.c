/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00279db0; name: FUN_.text__00279db0
 */


uint FUN__text__00279db0(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    uVar3 = 0;
    uVar6 = 0;
    piVar7 = (int *)(param_1 + (ulong)param_2 * 0x78b8 + 0x30);
    do {
      if (*piVar7 == 0) break;
      if ((uint)piVar7[-2] <= uVar5) {
        uVar2 = FUN__text__00279610(param_1,param_2,uVar3 & 0xffffffff);
        uVar6 = uVar6 + (uVar2 & 1);
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 0x4e;
    } while (uVar3 != 99);
    if ((uVar6 <= uVar5) || (bVar1 = 0x62 < uVar4, uVar5 = uVar6, uVar4 = uVar4 + 1, bVar1)) {
      return uVar5;
    }
  } while( true );
}


