/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f47e8; name: FUN_.text__005f47e8
 */


void FUN__text__005f47e8(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = (**(code **)(*param_1 + 0x78))((int)param_1,&local_4,&local_8);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0);
    if (((*(char *)(lVar4 + 0xe8) == (char)local_4) && (*(char *)(lVar4 + 0xe9) == local_4._1_1_))
       && (*(char *)(lVar4 + 0xea) == local_4._2_1_)) {
      uVar3 = (uint)(*(char *)(lVar4 + 0xeb) != local_4._3_1_);
    }
    else {
      uVar3 = 1;
    }
    uVar1 = *(ushort *)(lVar4 + 0x114);
    uVar2 = uVar3 | (uVar1 & 4) >> 2;
    uVar5 = 4;
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    *(ushort *)(lVar4 + 0x114) = uVar5 | uVar1 & 0xfffb;
    if (uVar3 == 0) {
      if (((*(char *)(lVar4 + 0xec) == (char)local_8) && (*(char *)(lVar4 + 0xed) == local_8._1_1_))
         && (*(char *)(lVar4 + 0xee) == local_8._2_1_)) {
        if (*(char *)(lVar4 + 0xef) != local_8._3_1_) {
          uVar2 = 1;
        }
        uVar5 = 4;
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        *(ushort *)(lVar4 + 0x114) = uVar5 | uVar1 & 0xfffb;
        if (*(char *)(lVar4 + 0xef) == local_8._3_1_) {
          return;
        }
      }
      else {
        *(ushort *)(lVar4 + 0x114) = uVar1 | 4;
      }
    }
    *(undefined4 *)(lVar4 + 0xe8) = local_4;
    *(undefined4 *)(lVar4 + 0xec) = local_8;
  }
  return;
}


