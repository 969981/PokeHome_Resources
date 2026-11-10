/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00573ba0; name: FUN_.text__00573ba0
 */


undefined8
FUN__text__00573ba0(undefined8 *param_1,long param_2,uint param_3,int param_4,short param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  long *plVar20;
  long *__src;
  uint uVar21;
  
  plVar5 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x80,0x70fbe8,0x79);
  if (plVar5 != (long *)0x0) {
    plVar5[5] = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar20 = param_1 + 2;
    if (*plVar20 == 0) {
      *plVar20 = (long)plVar5;
      *plVar5 = 0;
    }
    else {
      *plVar5 = *plVar20;
      *plVar20 = (long)plVar5;
    }
    iVar7 = (param_3 & 0xff) * 2;
    iVar4 = iVar7 * param_4;
    __src = plVar5 + 6;
    *(undefined4 *)__src = 0x46464952;
    plVar5[1] = param_2;
    *(undefined4 *)((long)plVar5 + 0x74) = 0;
    *(short *)((long)plVar5 + 0x7a) = param_5;
    *(undefined1 *)(plVar5 + 0xf) = 0;
    plVar5[7] = 0x20746d6645564157;
    uVar17 = (undefined2)iVar7;
    uVar19 = (undefined2)(param_3 & 0xff);
    if (param_5 == 0) {
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar4;
      *(undefined2 *)(plVar5 + 10) = uVar17;
      *(undefined4 *)(plVar5 + 8) = 0x28;
      *(undefined2 *)((long)plVar5 + 0x46) = uVar19;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x160010;
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
      *(uint *)(plVar5 + 0xb) = param_3 >> 0xc;
      *(undefined4 *)((long)plVar5 + 0x5c) = 1;
      if ((param_3 & 0xf00) == 0x200) {
        uVar13 = 0;
        uVar11 = 0;
        uVar9 = 0;
        uVar12 = 0xca;
        uVar16 = 0xc1;
        uVar14 = 200;
        uVar15 = 0x44;
        uVar18 = 0x86;
        uVar19 = 0x11d3;
        uVar17 = 0x721;
      }
      else {
        uVar17 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar12 = 0;
        uVar9 = 0x71;
        uVar11 = 0x9b;
        uVar13 = 0x38;
        uVar16 = 0xaa;
        uVar18 = 0x80;
        uVar19 = 0x10;
      }
      *(undefined1 *)((long)plVar5 + 0x6b) = uVar9;
      *(undefined2 *)(plVar5 + 0xc) = uVar17;
      uVar21 = 0x44;
      *(undefined2 *)((long)plVar5 + 0x62) = uVar19;
      *(undefined1 *)((long)plVar5 + 100) = uVar18;
      *(undefined1 *)((long)plVar5 + 0x65) = uVar15;
      *(undefined1 *)((long)plVar5 + 0x66) = uVar14;
      *(undefined1 *)((long)plVar5 + 0x67) = uVar16;
      *(undefined1 *)(plVar5 + 0xd) = uVar12;
      *(undefined1 *)((long)plVar5 + 0x69) = uVar13;
      *(undefined1 *)((long)plVar5 + 0x6a) = uVar11;
      *(undefined4 *)((long)plVar5 + 0x6c) = 0x61746164;
      plVar10 = plVar5 + 0xe;
    }
    else {
      *(undefined2 *)(plVar5 + 10) = uVar17;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x10;
      *(undefined4 *)(plVar5 + 8) = 0x18;
      *(uint *)(plVar5 + 0xb) = param_3;
      *(undefined4 *)((long)plVar5 + 0x5c) = 0x61746164;
      plVar10 = plVar5 + 0xc;
      uVar21 = 0x34;
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      *(undefined2 *)((long)plVar5 + 0x46) = uVar19;
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar4;
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
    }
    *(undefined4 *)((long)plVar5 + 0x34) = 0xffffffff;
    *(undefined4 *)plVar10 = 0xffffffff;
    while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
      if (plVar20[1] == param_2) {
        uVar8 = *(uint *)(plVar20 + 4);
        do {
          if (uVar8 == 0) {
            uVar6 = FUN__text__00573950(plVar20);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            uVar8 = *(uint *)(plVar20 + 4);
          }
          uVar2 = 0x20000 - uVar8;
          if (uVar21 <= 0x20000 - uVar8) {
            uVar2 = uVar21;
          }
          memcpy((void *)(*(long *)(plVar20[2] + (ulong)*(uint *)(plVar20 + 3) * 8 + -8) +
                         (ulong)uVar8),__src,(ulong)uVar2);
          if (*(short *)((long)plVar20 + 0x7a) == 0) {
            iVar7 = (int)plVar20[0xe] + uVar2;
            *(int *)(plVar20 + 0xe) = iVar7;
            iVar7 = iVar7 + 0x3c;
          }
          else {
            iVar7 = (int)plVar20[0xc] + uVar2;
            *(int *)(plVar20 + 0xc) = iVar7;
            iVar7 = iVar7 + 0x2c;
          }
          *(int *)((long)plVar20 + 0x34) = iVar7;
          __src = (long *)((long)__src + (ulong)uVar2);
          uVar1 = (int)plVar20[4] + uVar2;
          uVar8 = 0;
          if (uVar1 != 0x20000) {
            uVar8 = uVar1;
          }
          uVar21 = uVar21 - uVar2;
          *(uint *)(plVar20 + 4) = uVar8;
        } while (uVar21 != 0);
        *(undefined4 *)((long)plVar5 + 0x34) = 0;
        lVar3 = 0x70;
        if (*(short *)((long)plVar5 + 0x7a) != 0) {
          lVar3 = 0x60;
        }
        *(undefined4 *)((long)plVar5 + lVar3) = 0;
        return 1;
      }
    }
  }
  return 0;
}


