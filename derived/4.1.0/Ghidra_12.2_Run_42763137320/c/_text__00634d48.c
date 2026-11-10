/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00634d48; name: FUN_.text__00634d48
 */


void FUN__text__00634d48(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined2 local_90;
  undefined2 local_8c;
  undefined2 local_88;
  undefined2 local_84;
  undefined2 local_80;
  undefined2 local_7c;
  
  uVar20 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar20 & 1) == 0) {
    uVar9 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar10 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar11 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar9 = FUN__text__00637870(uVar9,uVar10,uVar11);
  }
  else {
    uVar9 = FUN__text__0060fec8();
  }
  uVar10 = FUN__text__00615af0(*(undefined8 *)(param_1 + 0x2f0));
  uVar11 = FUN__text__00613f00(*(undefined8 *)(param_1 + 0x2f0));
  uVar12 = FUN__text__006104d0(*(undefined8 *)(param_1 + 0x2f0));
  uVar20 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar20 & 1) == 0) {
    local_7c = FUN__text__00613300(*(undefined8 *)(param_1 + 0x2f0));
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_7c = 0x1f;
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((uVar13 >> 1 & 1) == 0) {
    local_80 = FUN__text__00613480(*(undefined8 *)(param_1 + 0x2f0));
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_80 = 0x1f;
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((uVar13 >> 2 & 1) == 0) {
    local_84 = FUN__text__00613600(*(undefined8 *)(param_1 + 0x2f0));
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_84 = 0x1f;
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((uVar13 >> 3 & 1) == 0) {
    local_88 = FUN__text__00613780(*(undefined8 *)(param_1 + 0x2f0));
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_88 = 0x1f;
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((uVar13 >> 4 & 1) == 0) {
    local_8c = FUN__text__00613900(*(undefined8 *)(param_1 + 0x2f0));
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_8c = 0x1f;
    uVar13 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0));
  }
  if ((uVar13 >> 5 & 1) == 0) {
    local_90 = FUN__text__00613a80(*(undefined8 *)(param_1 + 0x2f0));
  }
  else {
    local_90 = 0x1f;
  }
  uVar1 = FUN__text__00614010(*(undefined8 *)(param_1 + 0x2f0));
  uVar2 = FUN__text__006141f0(*(undefined8 *)(param_1 + 0x2f0));
  uVar3 = FUN__text__00614300(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__00614410(*(undefined8 *)(param_1 + 0x2f0));
  uVar5 = FUN__text__00614520(*(undefined8 *)(param_1 + 0x2f0));
  uVar6 = FUN__text__00614630(*(undefined8 *)(param_1 + 0x2f0));
  uVar14 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar15 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar16 = FUN__text__005fea6c(uVar14,uVar15,1);
  uVar17 = FUN__text__005feb84(uVar14,uVar15,1);
  uVar18 = FUN__text__005fec9c(uVar14,uVar15,1);
  uVar19 = FUN__text__005fedb4(uVar14,uVar15,1);
  uVar7 = FUN__text__005feecc(uVar14,uVar15,1);
  uVar8 = FUN__text__005fefe4(uVar14,uVar15,1);
  FUN__text__00637d54(uVar9,uVar10,uVar11,uVar12,uVar16,uVar17,uVar18,uVar19,uVar7,uVar8,local_7c,
                      local_80,local_84,local_88,local_8c,local_90,uVar1,uVar2,uVar3,uVar4,uVar5,
                      uVar6);
  return;
}


