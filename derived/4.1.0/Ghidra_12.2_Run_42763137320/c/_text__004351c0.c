/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004351c0; name: FUN_.text__004351c0
 */


void FUN__text__004351c0(long param_1,ulong param_2)

{
  uint5 uVar1;
  uint uVar2;
  ulong uVar3;
  uint5 *puVar4;
  uint5 *puVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x68);
  param_2 = param_2 & 0xffffffffff;
  if (uVar2 != 0) {
    puVar4 = *(uint5 **)(param_1 + 0x60);
    lVar6 = (ulong)uVar2 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + ((ulong)uVar2 - 1)) {
          uVar1 = puVar4[(ulong)uVar2 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + (ulong)uVar2 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x68) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0x78);
        goto joined_r0x00435238;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x78);
joined_r0x00435238:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0x70);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0x78);
        }
        *(uint *)(param_1 + 0x78) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0x88);
        goto joined_r0x004352a8;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x88);
joined_r0x004352a8:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0x80);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0x88);
        }
        *(uint *)(param_1 + 0x88) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0x98);
        goto joined_r0x00435318;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x98);
joined_r0x00435318:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0x90);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0x98) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0xa8);
        goto joined_r0x00435388;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xa8);
joined_r0x00435388:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0xa0);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0xb8);
        goto joined_r0x004353f8;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xb8);
joined_r0x004353f8:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0xb0);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 200);
        goto joined_r0x00435468;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 200);
joined_r0x00435468:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0xc0);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 200);
        }
        *(uint *)(param_1 + 200) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0xd8);
        goto joined_r0x004354d8;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xd8);
joined_r0x004354d8:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0xd0);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0xd8);
        }
        *(uint *)(param_1 + 0xd8) = uVar2 - 1;
        uVar2 = *(uint *)(param_1 + 0xe8);
        goto joined_r0x00435548;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xe8);
joined_r0x00435548:
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = *(uint5 **)(param_1 + 0xe0);
    lVar6 = uVar3 << 3;
    puVar5 = puVar4;
    do {
      if (*puVar5 == param_2) {
        if (puVar5 < puVar4 + (uVar3 - 1)) {
          uVar1 = puVar4[uVar3 - 1];
          *(undefined1 *)((long)puVar5 + 4) = *(undefined1 *)((long)puVar4 + uVar3 * 8 + -4);
          *(int *)puVar5 = (int)uVar1;
          uVar2 = *(uint *)(param_1 + 0xe8);
        }
        *(uint *)(param_1 + 0xe8) = uVar2 - 1;
        return;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}


