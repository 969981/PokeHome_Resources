/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edff0; name: FUN_.text__004edff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004edff0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  param_1[0x29] = 0;
  lVar2 = _DAT_008a50c8;
  lVar1 = param_1[0x1e];
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[5] = lVar2 + 0x300;
  uVar3 = (ulong)*(uint *)(param_1 + 0x1f);
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar2 + 0x2a8;
  param_1[2] = lVar2 + 0x2c0;
  if (*(uint *)(param_1 + 0x1f) != 0) {
    lVar2 = lVar1;
    do {
      lVar4 = *(long *)(lVar2 + 8);
      if (lVar4 != 0) {
        FUN__text__004c57f0(lVar4);
        FUN__text__00400fc0(2,lVar4);
        lVar1 = param_1[0x1e];
        uVar3 = (ulong)*(uint *)(param_1 + 0x1f);
      }
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar1 + uVar3 * 0x10);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (lVar1 != 0) {
    FUN__text__00400fc0(0);
    param_1[0x1e] = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN__text__00400fc0(0);
    param_1[0x23] = 0;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  lVar2 = param_1[0x20];
  if (lVar2 != 0) {
    if (*(uint *)(param_1 + 0x21) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x21) << 5;
      puVar5 = (undefined4 *)(lVar2 + 0x18);
      do {
        if (*(long *)(puVar5 + -4) != 0) {
          FUN__text__00400fc0(0);
        }
        lVar1 = lVar1 + -0x20;
        *(long *)(puVar5 + -4) = 0;
        *(undefined8 *)(puVar5 + -2) = 0;
        *puVar5 = 1;
        puVar5 = puVar5 + 8;
      } while (lVar1 != 0);
      lVar2 = param_1[0x20];
    }
    FUN__text__00400fc0(0,lVar2);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  lVar2 = param_1[0x27];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      FUN__text__00400fc0(0);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
    }
    FUN__text__00400fc0(2,lVar2);
  }
  thunk_FUN__text__0049392c(param_1);
  return;
}


