/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666f74; name: FUN_.text__00666f74
 */


void FUN__text__00666f74(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_8f8 [128];
  char acStack_851 [2044];
  undefined1 uStack_55;
  undefined1 auStack_54 [4];
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0)) {
    memset(acStack_851,0,0x801);
    uVar1 = FUN__text__006587d8(acStack_851,0x801,param_2,auStack_8f8 + 0x80);
    if (0x800 < uVar1) {
      sVar2 = strlen(param_2);
      if (param_2[sVar2 - 1] == '\n') {
        uVar5 = 0x7199c2;
        puVar3 = &uStack_55;
        uVar4 = 5;
      }
      else {
        uVar5 = 0x712084;
        puVar3 = auStack_54;
        uVar4 = 4;
      }
      FUN__text__006599c0(puVar3,uVar4,uVar5);
    }
    sVar2 = strlen(acStack_851);
    FUN__text__00667094(param_1,0,acStack_851,sVar2);
  }
  return;
}


