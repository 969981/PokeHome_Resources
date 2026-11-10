/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012b320; name: FUN_.text__0012b320
 */


/* WARNING: Type propagation algorithm not settling */

byte FUN__text__0012b320(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  
  if (*(long *)(param_1 + 0x440) == 0) {
    lVar16 = *(long *)(param_1 + 0x450);
    uVar3 = true;
  }
  else {
    iVar15 = FUN__text__003d3618();
    uVar3 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x450);
  }
  if (lVar16 == 0) {
    lVar16 = *(long *)(param_1 + 0x458);
    uVar4 = true;
  }
  else {
    iVar15 = FUN__text__003c673c();
    uVar4 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x458);
  }
  if (lVar16 == 0) {
    uVar5 = true;
    lVar16 = *(long *)(param_1 + 0x460);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar5 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x460);
  }
  if (lVar16 == 0) {
    uVar6 = true;
    lVar16 = *(long *)(param_1 + 0x468);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar6 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x468);
  }
  if (lVar16 == 0) {
    uVar7 = true;
    lVar16 = *(long *)(param_1 + 0x470);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar7 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x470);
  }
  if (lVar16 == 0) {
    uVar8 = true;
    lVar16 = *(long *)(param_1 + 0x478);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar8 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x478);
  }
  if (lVar16 == 0) {
    uVar9 = true;
    lVar16 = *(long *)(param_1 + 0x480);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar9 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0x480);
  }
  if (lVar16 == 0) {
    uVar10 = true;
    lVar16 = *(long *)(param_1 + 0xb8);
  }
  else {
    iVar15 = FUN__text__003d0e08();
    uVar10 = iVar15 == 1;
    lVar16 = *(long *)(param_1 + 0xb8);
  }
  if (lVar16 == 0) {
    uVar11 = false;
    cVar2 = *(char *)(param_1 + 0x4f9);
  }
  else {
    uVar11 = *(char *)(lVar16 + 0x170) != '\0';
    cVar2 = *(char *)(param_1 + 0x4f9);
  }
  if (cVar2 == '\0') {
    bVar12 = true;
    lVar16 = *(long *)(param_1 + 0x448);
  }
  else if (*(long *)(param_1 + 0x2c8) == 0) {
    bVar12 = false;
    lVar16 = *(long *)(param_1 + 0x448);
  }
  else {
    bVar12 = *(char *)(*(long *)(param_1 + 0x2c8) + 0x170) != '\0';
    lVar16 = *(long *)(param_1 + 0x448);
  }
  if (lVar16 == 0) {
    bVar13 = 1;
    lVar16 = *(long *)(param_1 + 0x438);
  }
  else {
    bVar13 = FUN__text__003d3cd8();
    lVar16 = *(long *)(param_1 + 0x438);
  }
  if (lVar16 == 0) {
    bVar14 = 1;
    lVar16 = *(long *)(param_1 + 0x448);
  }
  else {
    bVar14 = FUN__text__003d2f54();
    lVar16 = *(long *)(param_1 + 0x448);
  }
  if (((lVar16 == 0) || (uVar17 = FUN__text__003d3cd8(), (uVar17 & 1) == 0)) ||
     (*(char *)(param_1 + 0x4a9) != '\0')) {
    bVar1 = uVar3 ^ 1;
    if (*(long *)(param_1 + 0x440) == 0) {
      bVar1 = 1;
    }
  }
  else {
    FUN__text__003d3d58(*(undefined8 *)(param_1 + 0x448));
    *(undefined1 *)(param_1 + 0x4a9) = 1;
    bVar1 = uVar3 ^ 1;
    if (*(long *)(param_1 + 0x440) == 0) {
      bVar1 = 1;
    }
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4a8) == '\0')) {
    FUN__text__003d3630();
    *(undefined1 *)(param_1 + 0x4a8) = 1;
  }
  bVar1 = uVar4 ^ 1;
  if (*(long *)(param_1 + 0x450) == 0) {
    bVar1 = 1;
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4aa) == '\0')) {
    FUN__text__003c67b4();
    *(undefined1 *)(param_1 + 0x4aa) = 1;
    bVar1 = uVar5 ^ 1;
    if (*(long *)(param_1 + 0x458) == 0) {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = uVar5 ^ 1;
    if (*(long *)(param_1 + 0x458) == 0) {
      bVar1 = 1;
    }
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4ab) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4ab) = 1;
  }
  bVar1 = uVar6 ^ 1;
  if (*(long *)(param_1 + 0x460) == 0) {
    bVar1 = 1;
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4ac) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4ac) = 1;
    bVar1 = uVar7 ^ 1;
    if (*(long *)(param_1 + 0x468) == 0) {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = uVar7 ^ 1;
    if (*(long *)(param_1 + 0x468) == 0) {
      bVar1 = 1;
    }
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4ad) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4ad) = 1;
  }
  bVar1 = uVar8 ^ 1;
  if (*(long *)(param_1 + 0x470) == 0) {
    bVar1 = 1;
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4ae) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4ae) = 1;
    bVar1 = uVar9 ^ 1;
    if (*(long *)(param_1 + 0x478) == 0) {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = uVar9 ^ 1;
    if (*(long *)(param_1 + 0x478) == 0) {
      bVar1 = 1;
    }
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4af) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4af) = 1;
  }
  bVar1 = uVar10 ^ 1;
  if (*(long *)(param_1 + 0x480) == 0) {
    bVar1 = 1;
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4b0) == '\0')) {
    FUN__text__003d0e80();
    *(undefined1 *)(param_1 + 0x4b0) = 1;
  }
  return uVar10 & uVar9 & uVar8 & uVar7 & uVar6 &
                  uVar5 & uVar4 & uVar3 & uVar11 & bVar12 & bVar13 & bVar14;
}


