/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054bad4; name: FUN_.text__0054bad4
 */


undefined8
FUN__text__0054bad4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(long *)(param_1 + 0x18) = param_4;
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  uVar1 = *(undefined8 *)(param_4 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  FUN__text__0054b514(param_4,0);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  uVar6 = param_5[1];
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar6 = uVar6 & 0xffff7f00 | uVar6 + ((int)(uVar6 << 0x10) >> 0x1f) & 0xff;
  }
  if ((((uVar6 ^ 0xffffffff) & 0x7000) == 0) && (*(char *)(param_1 + 0x6d) == '\0')) {
    uVar6 = uVar6 & 0xffffbf00 | uVar6 + ((int)(uVar6 << 0x11) >> 0x1f) & 0xff;
  }
  *(uint *)(param_1 + 0xb8) = uVar6 & 0xff;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar3 = FUN__text__0054bc70(param_1,uVar6);
  if ((((int)uVar3 == 1) && (*(char *)(param_1 + 0x6c) != '\0')) && ((uVar6 & 0xff) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                       (*(long **)(param_1 + 0x20),0x10,0x70b09e,0x85);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar4;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      uVar3 = FUN__text__0054bdd0(puVar4,uVar3,uVar5,uVar6,*(undefined4 *)(param_1 + 0xbc),
                                  param_1 + 0x40);
      return uVar3;
    }
    uVar3 = 0x34;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return uVar3;
}


