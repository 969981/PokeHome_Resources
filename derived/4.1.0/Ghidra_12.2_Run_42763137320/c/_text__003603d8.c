/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003603d8; name: FUN_.text__003603d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003603d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar2 = _DAT_008a2f98;
  puVar1 = _DAT_0089f448;
  lVar3 = FUN__text__00371260(*_DAT_0089f448,_DAT_008a2f98);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) = (uint)(uVar4 >> 0x20) & 3 | *(uint *)(param_1 + 0x60) & 0xfffffffc;
  lVar2 = _DAT_008a2fa0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fa0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfffffff8 |
       *(uint *)(param_1 + 0x60) & 3 | ((uint)(uVar4 >> 0x20) & 1) << 2;
  lVar2 = _DAT_008a2fa8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fa8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfffffff0 |
       *(uint *)(param_1 + 0x60) & 7 | ((uint)(uVar4 >> 0x20) & 1) << 3;
  lVar2 = _DAT_008a2fb0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fb0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xffffff00 |
       *(uint *)(param_1 + 0x60) & 0xf | ((uint)(uVar4 >> 0x20) & 0xf) << 4;
  lVar2 = _DAT_008a2fb8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fb8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfffffe00 |
       *(uint *)(param_1 + 0x60) & 0xff | ((uint)(uVar4 >> 0x20) & 1) << 8;
  lVar2 = _DAT_008a2fc0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fc0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xffffe000 |
       *(uint *)(param_1 + 0x60) & 0x1ff | ((uint)(uVar4 >> 0x20) & 0xf) << 9;
  lVar2 = _DAT_008a2fc8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fc8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfffe0000 |
       *(uint *)(param_1 + 0x60) & 0x1fff | ((uint)(uVar4 >> 0x20) & 0xf) << 0xd;
  lVar2 = _DAT_008a2fd0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fd0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xffe00000 |
       *(uint *)(param_1 + 0x60) & 0x1ffff | ((uint)(uVar4 >> 0x20) & 0xf) << 0x11;
  lVar2 = _DAT_008a2fd8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fd8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xffc00000 |
       *(uint *)(param_1 + 0x60) & 0x1fffff | ((uint)(uVar4 >> 0x20) & 1) << 0x15;
  lVar2 = _DAT_008a2fe0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fe0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xff000000 |
       *(uint *)(param_1 + 0x60) & 0x7fffff | ((uint)(uVar4 >> 0x20) & 1) << 0x17;
  lVar2 = _DAT_008a2fe8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2fe8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xff800000 |
       *(uint *)(param_1 + 0x60) & 0x3fffff | ((uint)(uVar4 >> 0x20) & 1) << 0x16;
  lVar2 = _DAT_008a2ff0;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2ff0);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  uVar6 = *puVar1;
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfe000000 |
       *(uint *)(param_1 + 0x60) & 0xffffff | ((uint)(uVar4 >> 0x20) & 1) << 0x18;
  lVar2 = _DAT_008a2ff8;
  lVar3 = FUN__text__00371260(uVar6,_DAT_008a2ff8);
  uVar4 = FUN__text__003608a0(lVar3,lVar2 + 4);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,lVar2 + 4);
  }
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfc000000 |
       *(uint *)(param_1 + 0x60) & 0x1ffffff | ((uint)(uVar4 >> 0x20) & 1) << 0x19;
  return;
}


