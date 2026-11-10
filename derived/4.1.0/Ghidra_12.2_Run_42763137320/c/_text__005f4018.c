/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4018; name: FUN_.text__005f4018
 */


void FUN__text__005f4018(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ushort uVar8;
  
  uVar4 = FUN__text__003e96a0(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0) = uVar4;
  uVar3 = FUN__text__006bd81c(*(undefined8 *)
                               (*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0)
                             );
  if ((uVar3 & 0xffff) < param_3) {
    FUN__text__003e9990(*(undefined8 *)(param_1 + 0x88),uVar4,param_3);
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0);
    uVar2 = *(ushort *)(lVar7 + 0x114) >> 2 & 1;
    if (*(long *)(lVar7 + 0x108) != lVar5) {
      uVar2 = 1;
    }
    uVar8 = 4;
    if (uVar2 == 0) {
      uVar8 = 0;
    }
    *(ushort *)(lVar7 + 0x114) = uVar8 | *(ushort *)(lVar7 + 0x114) & 0xfffb;
    if (*(long *)(lVar7 + 0x108) != lVar5) {
      *(long *)(lVar7 + 0x108) = lVar5;
    }
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0);
  lVar5 = *(long *)(*plVar6 + 0x30);
  plVar6[3] = (ulong)*(uint *)(*plVar6 + 0x38);
  plVar6[2] = lVar5;
  lVar5 = *(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0;
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x18);
  *(byte *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0 + 0x92) =
       *(byte *)(param_1 + 0x9a);
  *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0x9a) * 0xa0 + 0x90) = 0;
  cVar1 = *(char *)(param_1 + 0x9a) + '\x01';
  *(char *)(param_1 + 0x9a) = cVar1;
  if (*(char *)(param_1 + 0x98) == cVar1) {
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  return;
}


