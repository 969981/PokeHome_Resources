/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2600; name: FUN_.text__006e2600
 */


void FUN__text__006e2600(long param_1)

{
  undefined8 *puVar1;
  MutexType *pMVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x1260) = 0;
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1280) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN__text__006d86a0();
  FUN__text__006d81c0(param_1 + 0x14c8);
  if (0 < *(int *)(param_1 + 8)) {
    lVar4 = 0;
    lVar5 = 0x8b8;
    do {
      lVar4 = lVar4 + 1;
      lVar7 = *(long *)(param_1 + 0x10) + lVar5;
      *(undefined8 *)(lVar7 + -0x7c0) = 0;
      *(undefined8 *)(lVar7 + -0x7b8) = 0;
      *(undefined8 *)(lVar7 + -2000) = 0;
      *(undefined8 *)(lVar7 + -0x7c8) = 0;
      *(undefined8 *)(lVar7 + -0x7e0) = 0;
      *(undefined8 *)(lVar7 + -0x7d8) = 0;
      *(undefined8 *)(lVar7 + -0x7f0) = 0;
      *(undefined8 *)(lVar7 + -0x7e8) = 0;
      *(undefined8 *)(lVar7 + -0x800) = 0;
      *(undefined8 *)(lVar7 + -0x7f8) = 0;
      *(undefined8 *)(lVar7 + -0x810) = 0;
      *(undefined8 *)(lVar7 + -0x808) = 0;
      *(undefined8 *)(lVar7 + -0x820) = 0;
      *(undefined8 *)(lVar7 + -0x818) = 0;
      *(undefined8 *)(lVar7 + -0x830) = 0;
      *(undefined8 *)(lVar7 + -0x828) = 0;
      *(undefined8 *)(lVar7 + -0x840) = 0;
      *(undefined8 *)(lVar7 + -0x838) = 0;
      *(undefined8 *)(lVar7 + -0x850) = 0;
      *(undefined8 *)(lVar7 + -0x848) = 0;
      *(undefined8 *)(lVar7 + -0x860) = 0;
      *(undefined8 *)(lVar7 + -0x858) = 0;
      *(undefined8 *)(lVar7 + -0x870) = 0;
      *(undefined8 *)(lVar7 + -0x868) = 0;
      *(undefined8 *)(lVar7 + -0x880) = 0;
      *(undefined8 *)(lVar7 + -0x878) = 0;
      *(undefined8 *)(lVar7 + -0x890) = 0;
      *(undefined8 *)(lVar7 + -0x888) = 0;
      *(undefined8 *)(lVar7 + -0x8a0) = 0;
      *(undefined8 *)(lVar7 + -0x898) = 0;
      *(undefined8 *)(lVar7 + -0x8b0) = 0;
      *(undefined8 *)(lVar7 + -0x8a8) = 0;
      lVar7 = *(long *)(param_1 + 0x10) + lVar5;
      *(undefined8 *)(lVar7 + -0x10) = 0;
      *(undefined8 *)(lVar7 + -8) = 0;
      *(undefined8 *)(lVar7 + -0x20) = 0;
      *(undefined8 *)(lVar7 + -0x18) = 0;
      *(undefined8 *)(lVar7 + -0x30) = 0;
      *(undefined8 *)(lVar7 + -0x28) = 0;
      *(undefined8 *)(lVar7 + -0x40) = 0;
      *(undefined8 *)(lVar7 + -0x38) = 0;
      *(undefined8 *)(lVar7 + -0x50) = 0;
      *(undefined8 *)(lVar7 + -0x48) = 0;
      *(undefined8 *)(lVar7 + -0x60) = 0;
      *(undefined8 *)(lVar7 + -0x58) = 0;
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      *(undefined8 *)(lVar7 + -0x90) = 0;
      *(undefined8 *)(lVar7 + -0x88) = 0;
      *(undefined8 *)(lVar7 + -0xa0) = 0;
      *(undefined8 *)(lVar7 + -0x98) = 0;
      *(undefined8 *)(lVar7 + -0xb0) = 0;
      *(undefined8 *)(lVar7 + -0xa8) = 0;
      *(undefined8 *)(lVar7 + -0xc0) = 0;
      *(undefined8 *)(lVar7 + -0xb8) = 0;
      *(undefined8 *)(lVar7 + -0xd0) = 0;
      *(undefined8 *)(lVar7 + -200) = 0;
      *(undefined8 *)(lVar7 + -0xe0) = 0;
      *(undefined8 *)(lVar7 + -0xd8) = 0;
      *(undefined8 *)(lVar7 + -0xf0) = 0;
      *(undefined8 *)(lVar7 + -0xe8) = 0;
      *(undefined8 *)(lVar7 + -0x100) = 0;
      *(undefined8 *)(lVar7 + -0xf8) = 0;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
      lVar5 = lVar5 + 0x9e8;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (lVar4 < *(int *)(param_1 + 8));
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
  if (0 < *(int *)(param_1 + 0x8b8)) {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 8;
      FUN__text__006d7a6c(*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5));
      FUN__text__006e2430(param_1,*(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5));
      lVar4 = lVar4 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x8b0) + lVar5) = 0;
    } while (lVar4 < *(int *)(param_1 + 0x8b8));
  }
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
  pMVar2 = (MutexType *)(param_1 + 0x16e0);
  nn::os::LockMutex(pMVar2);
  lVar4 = 0;
  bVar10 = false;
  do {
    plVar6 = (long *)(param_1 + 0x2b0 + lVar4 * 8);
    while (plVar6[0x40] == 0) {
      lVar4 = lVar4 + 1;
      plVar6 = plVar6 + 1;
      if (lVar4 == 0x40) {
        nn::os::UnlockMutex(pMVar2);
        if (!bVar10) {
          return;
        }
        goto LAB__text__006e288c;
      }
    }
    lVar5 = param_1 + lVar4 * 8;
    lVar7 = plVar6[0x40];
    do {
      while (lVar8 = *(long *)(lVar7 + 0x1d0), *(long *)(lVar5 + 0xb0) == 0) {
        *(long *)(lVar5 + 0xb0) = lVar7;
        *(undefined8 *)(lVar7 + 0x1d0) = 0;
        *(undefined8 *)(lVar7 + 0x1d8) = 0;
        *plVar6 = lVar7;
        *(undefined1 *)(lVar7 + 0xf) = 0;
        lVar7 = lVar8;
        if (lVar8 == 0) goto LAB__text__006e2864;
      }
      *(long *)(*plVar6 + 0x1d0) = lVar7;
      lVar9 = *plVar6;
      *(undefined8 *)(lVar7 + 0x1d0) = 0;
      *(long *)(lVar7 + 0x1d8) = lVar9;
      *plVar6 = lVar7;
      *(undefined1 *)(lVar7 + 0xf) = 0;
      lVar7 = lVar8;
    } while (lVar8 != 0);
LAB__text__006e2864:
    bVar3 = lVar4 == 0x3f;
    lVar4 = lVar4 + 1;
    bVar10 = true;
    if (bVar3) {
      nn::os::UnlockMutex(pMVar2);
LAB__text__006e288c:
      memset((void *)(param_1 + 0x4b0),0,0x400);
      return;
    }
  } while( true );
}


