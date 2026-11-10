/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a50c0; name: FUN_.text__006a50c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a50c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (*(code *)*_DAT_008a6960)(0x140,4,*_DAT_008a6970);
  if (lVar2 != 0) {
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(long *)(lVar2 + 0x28) = lVar2 + 0x28;
    lVar1 = _DAT_008a69a0;
    *(undefined4 *)(lVar2 + 0xaf) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined4 *)(lVar2 + 0xef) = 0;
    *(undefined4 *)(lVar2 + 0x128) = 0;
    *(long *)(lVar2 + 0x30) = lVar2 + 0x28;
    *(long *)(lVar2 + 0x38) = lVar2 + 0x38;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(long *)(lVar2 + 0x40) = lVar2 + 0x38;
    *(long *)(lVar2 + 0x48) = lVar1 + 0x10;
    *(long *)(lVar2 + 0x70) = lVar2 + 0x70;
    *(long *)(lVar2 + 0x78) = lVar2 + 0x70;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(long *)(lVar2 + 0x88) = lVar2 + 0x88;
    *(long *)(lVar2 + 0x90) = lVar2 + 0x88;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(long *)(lVar2 + 200) = lVar2 + 200;
    *(long *)(lVar2 + 0xd0) = lVar2 + 200;
    *(long *)(lVar2 + 0x130) = lVar2 + 0x130;
    *(long *)(lVar2 + 0x138) = lVar2 + 0x130;
    *(undefined1 *)(lVar2 + 0xb0) = 1;
    *(undefined1 *)(lVar2 + 0xf0) = 1;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
  }
  FUN__text__006a5720(param_1,lVar2,param_2);
  FUN__text__006a5b50(lVar2,*param_1,param_1[1],param_2);
  FUN__text__006a5ea0(param_1,lVar2,param_2);
  FUN__text__006a60d0(param_1,lVar2,param_2);
  *(uint *)(lVar2 + 0x128) = (uint)*(byte *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x40) != '\0') {
    uVar3 = (**(code **)(**(long **)(param_1[1] + 0x18) + 0x78))
                      (*(long **)(param_1[1] + 0x18),(char *)(param_2 + 0x40),1);
    *(undefined8 *)(lVar2 + 0x110) = uVar3;
  }
  FUN__text__006a6570(lVar2);
  return lVar2;
}


