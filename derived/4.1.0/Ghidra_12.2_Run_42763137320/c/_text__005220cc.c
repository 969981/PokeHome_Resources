/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005220cc; name: FUN_.text__005220cc
 */


undefined4 * FUN__text__005220cc(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + (ulong)param_4 * 0x170;
  puVar1 = (undefined4 *)(lVar3 + 0x128);
  plVar2 = (long *)(lVar3 + 0x288);
  if (*(long *)(lVar3 + 0x288) != 0) {
    FUN__text__0051f360(*(long *)(lVar3 + 0x288),param_1,puVar1);
    *(undefined8 *)(lVar3 + 300) = 0;
    *puVar1 = 0x811c9dc5;
    *(undefined4 *)(lVar3 + 0x180) = 0x811c9dc5;
    *(undefined4 *)(lVar3 + 0x1d8) = 0x811c9dc5;
    *(undefined4 *)(lVar3 + 0x230) = 0x811c9dc5;
    *(undefined8 *)(lVar3 + 0x134) = 0;
    *(undefined8 *)(lVar3 + 0x13c) = 0;
    *(undefined8 *)(lVar3 + 0x144) = 0;
    *(undefined8 *)(lVar3 + 0x14c) = 0;
    *(undefined8 *)(lVar3 + 0x154) = 0;
    *(undefined8 *)(lVar3 + 0x170) = 0;
    *(undefined8 *)(lVar3 + 0x175) = 0;
    *(undefined8 *)(lVar3 + 0x184) = 0;
    *(undefined8 *)(lVar3 + 0x18c) = 0;
    *(undefined8 *)(lVar3 + 0x194) = 0;
    *(undefined8 *)(lVar3 + 0x19c) = 0;
    *(undefined8 *)(lVar3 + 0x1a4) = 0;
    *(undefined8 *)(lVar3 + 0x1ac) = 0;
    *(undefined8 *)(lVar3 + 0x1cd) = 0;
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
    *(undefined8 *)(lVar3 + 0x1dc) = 0;
    *(undefined8 *)(lVar3 + 0x1e4) = 0;
    *(undefined8 *)(lVar3 + 0x1ec) = 0;
    *(undefined8 *)(lVar3 + 500) = 0;
    *(undefined8 *)(lVar3 + 0x1fc) = 0;
    *(undefined8 *)(lVar3 + 0x204) = 0;
    *(undefined8 *)(lVar3 + 0x220) = 0;
    *(undefined8 *)(lVar3 + 0x225) = 0;
    *(undefined8 *)(lVar3 + 0x234) = 0;
    *(undefined8 *)(lVar3 + 0x23c) = 0;
    *(undefined8 *)(lVar3 + 0x244) = 0;
    *(undefined8 *)(lVar3 + 0x24c) = 0;
    *(undefined8 *)(lVar3 + 0x254) = 0;
    *(undefined8 *)(lVar3 + 0x25c) = 0;
    *(undefined8 *)(lVar3 + 0x27d) = 0;
    *(undefined8 *)(lVar3 + 0x268) = 0;
    *(undefined1 *)(lVar3 + 0x17c) = 1;
    *(undefined1 *)(lVar3 + 0x1d4) = 1;
    *(undefined1 *)(lVar3 + 0x22c) = 1;
    *(undefined1 *)(lVar3 + 0x284) = 1;
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x1c0) = 0;
    *(undefined8 *)(lVar3 + 0x1c8) = 0;
    *(undefined8 *)(lVar3 + 0x210) = 0;
    *(undefined8 *)(lVar3 + 0x218) = 0;
    *(undefined8 *)(lVar3 + 0x270) = 0;
    *(undefined8 *)(lVar3 + 0x278) = 0;
    *plVar2 = 0;
    *(undefined8 *)(lVar3 + 0x290) = 0;
  }
  if (*(int *)(param_1 + 0x410) != 0) {
    *plVar2 = param_2;
    *(undefined8 *)(param_1 + (ulong)param_4 * 0x170 + 0x290) = param_3;
    FUN__text__0051ef10(param_2,param_1,puVar1);
    lVar4 = *plVar2;
    *(undefined8 *)(lVar3 + 0x160) = *(undefined8 *)(lVar4 + 8);
    *(undefined8 *)(lVar3 + 0x1b8) = *(undefined8 *)(lVar4 + 8);
    *(undefined8 *)(lVar3 + 0x210) = *(undefined8 *)(lVar4 + 8);
    *(undefined8 *)(lVar3 + 0x268) = *(undefined8 *)(lVar4 + 8);
  }
  return puVar1;
}


