/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d840; name: FUN_.text__0047d840
 */


void FUN__text__0047d840(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uStack_21;
  
  for (lVar1 = DAT_00ae9e38; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    fVar2 = *(float *)(lVar1 + 0x70);
    fVar3 = *(float *)(lVar1 + 0x74);
    fVar5 = *(float *)(lVar1 + 0x60);
    fVar4 = *(float *)(lVar1 + 100);
    fVar6 = *(float *)(lVar1 + 0x68);
    fVar7 = *(float *)(lVar1 + 0x6c);
    *(float *)(lVar1 + 0x4c) = fVar2;
    *(float *)(lVar1 + 0x50) = fVar3;
    *(float *)(lVar1 + 0x54) = fVar5;
    *(float *)(lVar1 + 0x58) = fVar4;
    *(float *)(lVar1 + 0x5c) = fVar6;
    *(float *)(lVar1 + 0x3c) = fVar6 * fVar2 - fVar4 * fVar3;
    *(float *)(lVar1 + 0x40) = fVar5 * fVar3 - fVar7 * fVar6;
    *(float *)(lVar1 + 0x44) = fVar7 * fVar4 - fVar5 * fVar2;
    *(float *)(lVar1 + 0x48) = fVar7;
    FUN__text__0044b8a0(&DAT_00aea840,*(undefined8 *)(*(long *)(lVar1 + 8) + 0x58),&uStack_21);
  }
  return;
}


