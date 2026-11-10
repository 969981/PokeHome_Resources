/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9788; name: FUN_.text__003d9788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d9788(long *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    return 0x72;
  }
  puVar2 = operator_new(0x98,_DAT_008a37f8);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xc;
  }
  *(undefined8 *)(puVar2 + 0x24) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined4 **)(puVar2 + 6) = puVar2 + 10;
  puVar2[4] = 5;
  cVar1 = param_2[2];
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x1a) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined4 **)(puVar2 + 0x14) = puVar2 + 0x16;
  uVar3 = (uint)(byte)param_2[1] << 2;
  puVar2[1] = uVar3;
  *(undefined8 *)(puVar2 + 0x1e) = 0;
  *(undefined8 *)(puVar2 + 0x1c) = 0;
  *(undefined8 *)(puVar2 + 0x22) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  if (cVar1 != '\0') {
    uVar3 = uVar3 | 8;
    puVar2[1] = uVar3;
  }
  if (*param_2 != '\0') {
    uVar3 = uVar3 & 0xfffffffb | 2;
    puVar2[1] = uVar3;
  }
  if (param_2[3] != '\0') {
    puVar2[1] = uVar3 | 0x10;
  }
  *(undefined8 *)(puVar2 + 2) = 0;
  *puVar2 = 0;
  *param_1 = (long)puVar2;
  return 0;
}


