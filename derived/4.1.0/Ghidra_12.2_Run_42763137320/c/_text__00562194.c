/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562194; name: FUN_.text__00562194
 */


void FUN__text__00562194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 *param_5)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x1a4) = (uint)*(byte *)(param_5 + 1);
  FUN__text__00561fe4(param_4,param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x140);
  *(undefined2 *)(param_1 + 0x194) = *(undefined2 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x1a8) = *param_5;
  FUN__text__00562278(param_1,param_5[1]);
  bVar2 = false;
  if (*(char *)(param_1 + 0x134) != '\0' || *(char *)(param_1 + 0x118) != '\0') {
    bVar2 = *(uint *)(param_1 + 0x1a0) == param_5[1] ||
            0xfff < (*(uint *)(param_1 + 0x1a0) & param_5[1]);
  }
  *(bool *)(param_1 + 0x1ac) = bVar2;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  iVar1 = FUN__text__00562418(param_1,0);
  if ((iVar1 == 1) && (iVar1 = FUN__text__00562530(param_1), iVar1 == 1)) {
    lVar3 = *(long *)(param_1 + 8);
    *(undefined1 *)(lVar3 + 10) = 0;
    *(undefined2 *)(lVar3 + 8) = 0;
  }
  return;
}


