/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661a60; name: FUN_.text__00661a60
 */


void FUN__text__00661a60(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x1e8);
  if (*(long *)(lVar5 + 0x220) != 0) {
    FUN__text__0065fd64(lVar5 + 0x220);
    FUN__text__0065fd64(lVar5 + 0x230);
    lVar2 = *(long *)(lVar5 + 0x288);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar5 + 0x290);
      if (lVar3 != 0) {
        do {
          FUN__text__006783e4(*(undefined8 *)(*(long *)(lVar5 + 0x288) + lVar3 * 8 + -8));
          lVar3 = *(long *)(lVar5 + 0x290) + -1;
          *(long *)(lVar5 + 0x290) = lVar3;
        } while (lVar3 != 0);
        lVar2 = *(long *)(lVar5 + 0x288);
      }
      FUN__text__006783e4(lVar2);
      *(undefined8 *)(lVar5 + 0x288) = 0;
    }
  }
  if (param_1[0xaa] != 0) {
    if ((param_2 & 1) != 0) {
      iVar1 = FUN__text__006866c4(param_1[0xaa],0,*(undefined4 *)(lVar5 + 0x218),5);
      if (iVar1 == 0) {
        FUN__text__0067c120(param_1[0xaa]);
      }
      if (*(int *)(lVar5 + 0x218) == (int)param_1[0xbb]) {
        FUN__text__00666f74(lVar4,0x713ff7);
        *(undefined4 *)(param_1 + 0xbb) = 0;
      }
    }
    if (*(long *)(lVar4 + 0x1520) != 0) {
      param_1[0xbc] = param_1[0xbc] - *(long *)(lVar4 + 0x1520);
      *(undefined8 *)(lVar4 + 0x1520) = 0;
    }
    if (0 < *(int *)(lVar5 + 0x218)) {
      iVar1 = FUN__text__0067fd5c(param_1[0xaa],*(int *)(lVar5 + 0x218),0);
      if (iVar1 != 0) {
        FUN__text__00666f74(lVar4,0x71afa9,*(undefined4 *)(lVar5 + 0x218));
      }
      *(undefined4 *)(lVar5 + 0x218) = 0;
    }
  }
  return;
}


