/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f4fc; name: FUN_.text__0025f4fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0025f4fc(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = *param_1;
  FUN__text__0012c300(lVar5 + 0x110,0x70ac84);
  puVar4 = _DAT_008a1ce8;
  *(undefined4 *)(lVar5 + 0x681) = *(undefined4 *)(_DAT_008a1ce8 + 1);
  *(undefined8 *)(lVar5 + 0x685) = *(undefined8 *)(puVar4 + 5);
  *(undefined8 *)(lVar5 + 0x68d) = *(undefined8 *)(puVar4 + 0xd);
  *(undefined8 *)(lVar5 + 0x695) = *(undefined8 *)(puVar4 + 0x15);
  *(undefined4 *)(lVar5 + 0x69d) = *(undefined4 *)(puVar4 + 0x1d);
  *(undefined4 *)(lVar5 + 0x6a1) = *(undefined4 *)(puVar4 + 0x21);
  *(undefined2 *)(lVar5 + 0x6a5) = *(undefined2 *)(puVar4 + 0x25);
  uVar3 = puVar4[0x27];
  *(undefined1 *)(lVar5 + 0x680) = *puVar4;
  uVar1 = *(undefined4 *)(puVar4 + 0x28);
  uVar2 = *(undefined4 *)(puVar4 + 0x2c);
  *(undefined1 *)(lVar5 + 0x6a7) = uVar3;
  *(undefined4 *)(lVar5 + 0x6a8) = uVar1;
  *(undefined4 *)(lVar5 + 0x6ac) = uVar2;
  FUN__text__0025b6d0(lVar5);
  return 1;
}


