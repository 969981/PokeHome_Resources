/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00181a9c; name: FUN_.text__00181a9c
 */


undefined8 * FUN__text__00181a9c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)FUN__text__0012559c(param_1);
    uVar3 = FUN__text__0012559c(param_1);
    puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0xca0,0x10);
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar2;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *puVar1 = 0x86cc88;
    puVar1[1] = uVar3;
    puVar1[0x56] = 0;
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x8b] = 0;
    puVar1[0x8a] = 0;
    puVar1[0x89] = 0;
    puVar1[0x88] = 0;
    puVar1[0x7b] = 0;
    puVar1[0x7a] = 0;
    puVar1[0x79] = 0;
    puVar1[0x78] = 0;
    puVar1[0x77] = 0;
    puVar1[0xbd] = 0;
    puVar1[0x44] = 0x8691c8;
    puVar1[0x76] = 0x8691c8;
    puVar1[0xbc] = 0;
    puVar1[0xbb] = 0;
    puVar1[0xba] = 0;
    puVar1[0xad] = 0;
    puVar1[0xac] = 0;
    puVar1[0xab] = 0;
    puVar1[0xaa] = 0;
    puVar1[0xa9] = 0;
    puVar1[0xa8] = 0x8691c8;
    puVar1[0xef] = 0;
    puVar1[0xee] = 0;
    puVar1[0xed] = 0;
    puVar1[0xec] = 0;
    puVar1[0xdf] = 0;
    puVar1[0xde] = 0;
    puVar1[0xdd] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdb] = 0;
    puVar1[0xda] = 0x8691c8;
    puVar1[0x121] = 0;
    puVar1[0x120] = 0;
    puVar1[0x11f] = 0;
    puVar1[0x11e] = 0;
    puVar1[0x111] = 0;
    puVar1[0x110] = 0;
    puVar1[0x10f] = 0;
    puVar1[0x10e] = 0;
    puVar1[0x10d] = 0;
    puVar1[0x10c] = 0x8691c8;
    puVar1[0x153] = 0;
    puVar1[0x152] = 0;
    puVar1[0x151] = 0;
    puVar1[0x150] = 0;
    puVar1[0x143] = 0;
    puVar1[0x142] = 0;
    puVar1[0x141] = 0;
    puVar1[0x140] = 0;
    puVar1[0x13f] = 0;
    puVar1[0x13e] = 0x8691c8;
    puVar1[0x185] = 0;
    puVar1[0x184] = 0;
    puVar1[0x183] = 0;
    puVar1[0x182] = 0;
    puVar1[0x175] = 0;
    puVar1[0x174] = 0;
    puVar1[0x173] = 0;
    puVar1[0x172] = 0;
    puVar1[0x171] = 0;
    puVar1[0x170] = 0x8691c8;
    *(undefined4 *)(puVar1 + 0x192) = 0;
    puVar1[0x12] = 0x8691c8;
    puVar1[0x13] = 0;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    lVar4 = *(long *)(param_1 + 0x98);
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    if (lVar4 != 0) {
      FUN__text__00125bd0(param_1 + 0xa0);
      puVar1 = *(undefined8 **)(param_1 + 0x98);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0x10;
    *(long **)(param_1 + 0xa0) = plVar2;
    *(undefined8 *)(param_1 + 0xa8) = 0xca0;
    if (*(long *)(param_1 + 0x5c8) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x5c8) + 0xa8) = puVar1;
      return *(undefined8 **)(param_1 + 0x98);
    }
  }
  return puVar1;
}


