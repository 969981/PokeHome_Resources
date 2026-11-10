/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00285880; name: FUN_.text__00285880
 */


void FUN__text__00285880(long param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  byte *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_7c [4];
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar15 = *(long *)(param_1 + 0x2d0);
  if (lVar15 != 0) {
    plVar16 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  if (*(char *)(param_1 + 0x1660) != '\0') {
    FUN__text__0028e2e0(*(undefined8 *)(param_1 + 0x1658));
  }
  if ((*(int *)(param_1 + 0x880) - 2U < 5) || (*(int *)(param_1 + 0x880) == 10)) {
    local_68 = -0x70308334409e6351;
    lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b28);
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b30);
    bVar12 = *(byte *)(lVar8 + 0x58) | 1;
  }
  else {
    local_68 = -0x70308434409e6504;
    lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b28);
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b30);
    bVar12 = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  *(byte *)(lVar8 + 0x58) = bVar12;
  lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b38);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b40);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_68);
  local_b8 = 0x70e41ddcb2787ed8;
  uVar9 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_b8);
  lVar17 = *(long *)(param_1 + 0x578);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  FUN__text__003cdea0(lVar17,*(undefined4 *)
                              (*(long *)(*(long *)(param_1 + 0x640) + 0x7b220) +
                               (long)(int)*(char *)(param_1 + 0x96c) * 0xac + 4),uVar9,0,0);
  (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  lVar17 = *(long *)(param_1 + 0x560);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  uVar7 = *(undefined4 *)(param_1 + 0x880);
  local_b8 = 0x7ece28c71d88d111;
  uVar9 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_b8);
  FUN__text__003c68d8(lVar17,uVar7,uVar9,0,0);
  (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  iVar3 = FUN__text__0027a5c0(*(undefined8 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970));
  if (iVar3 < 1) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    return;
  }
  cVar2 = *(char *)(param_1 + 0x96c);
  lVar19 = *(long *)(*(long *)(param_1 + 0x640) + 0x7b220);
  puVar10 = (undefined2 *)
            FUN__text__0027a640(*(long *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x970),
                                *(undefined4 *)(param_1 + 0x974),*(undefined1 *)(param_1 + 0x978),
                                *(undefined1 *)(param_1 + 0x979));
  uVar1 = *puVar10;
  lVar17 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  local_b8 = 0xcbf29ce484222645;
  local_b0 = (byte *)(lVar19 + (long)(int)cVar2 * 0xac + 8);
  bVar12 = *local_b0;
  if (bVar12 != 0) {
    pbVar14 = (byte *)(lVar19 + (long)(int)cVar2 * 0xac + 9);
    do {
      local_b8 = (local_b8 ^ bVar12) * 0x100000001b3;
      bVar12 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar12 != 0);
  }
  local_a8 = 0x7f;
  local_a0 = 0;
  FUN__text__00115650(&local_70,*(undefined8 *)(lVar17 + 0x4d8),&local_b8,
                      *(undefined4 *)(param_1 + 0x880));
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  lVar18 = *(long *)(local_70 + 0x60);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  iVar3 = *(int *)(param_1 + 0x970);
  iVar4 = FUN__text__0028f1c0(param_1,uVar1);
  lVar13 = *(long *)(param_1 + 0x640);
  if (*(int *)(lVar13 + 0x130) == 1) {
    uVar11 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar13 + 0x92954),
                                 *(undefined4 *)(lVar13 + 0x92958),
                                 *(undefined1 *)(lVar13 + iVar3 + 0x92968),uVar1);
    if ((uVar11 & 1) == 0) goto LAB__text__00285cb0;
LAB__text__00285bd4:
    local_78 = FUN__text__00288820(param_1,(long)*(char *)(param_1 + 0x96c));
    if ((*(long *)(local_70 + 0x188) == 0) ||
       (iVar3 = FUN__text__005dc7a0(*(long *)(local_70 + 0x188),&local_78), iVar3 < 0))
    goto LAB__text__00285cb0;
    lVar13 = *(long *)(lVar15 + 0x2e8);
    if (lVar13 == 0) {
      FUN__text__005f2d98(lVar18,&local_78,0);
      lVar13 = *(long *)(lVar15 + 0x2e8);
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN__text__005f2d98(lVar18,&local_78,lVar13);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      lVar13 = *(long *)(lVar15 + 0x2e8);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    uVar5 = FUN__text__005f324c(lVar13);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    if (uVar5 < 4) goto LAB__text__00285cb0;
    uVar5 = *(uint *)(param_1 + 0x880);
    if ((6 < uVar5) && (0xfffffffd < *(int *)(lVar19 + (long)(int)cVar2 * 0xac) - 0x19U)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      FUN__text__002889d0(param_1);
      goto LAB__text__00285cbc;
    }
    uVar6 = FUN__text__0015ab30();
    if (uVar5 != uVar6) {
      local_7c[0] = 0;
      local_b8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (byte *)0x0;
      local_a8 = 0;
      FUN__text__005ffbe4(&local_b8,local_7c,uVar1,0);
      if (local_7c[0] != 0) {
        uVar5 = 0;
        do {
          FUN__text__00325c10(uVar1,uVar5);
          if (*(uint *)(param_1 + 0x880) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00285e94 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__00285e64 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x880) + 0x7301d8) * 4))();
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_7c[0]);
      }
      local_e0 = 0xa7649e0ad180b01a;
      uStack_d8 = 0x71a942;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      local_d0 = 0x1b;
      local_c8 = 0;
      FUN__text__00115650(&local_c0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_e0,0xb)
      ;
      lVar8 = *(long *)(local_c0 + 0x60);
      if ((lVar8 == 0) || ((**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(), local_c0 != 0)) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = 0;
      }
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      }
      iVar3 = FUN__text__0015ab30();
      if ((iVar3 - 2U < 5) || (iVar3 == 10)) {
        local_e0 = 0x8fcf7ecbbf61a015;
        lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b38);
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
        lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b40);
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
        if (*(uint *)(param_1 + 0x880) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00285fec */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__00285ff8 +
                    (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x880) + 0x7301e3) * 4))();
          return;
        }
      }
      else {
        local_e0 = 0x8fcf7dcbbf619e62;
        lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b38);
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
        lVar19 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x730b40);
        *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
        if (*(uint *)(param_1 + 0x880) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x00286078 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__00286084 +
                    (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x880) + 0x7301ee) * 4))();
          return;
        }
      }
      uVar7 = FUN__text__00601370(*(undefined8 *)(param_1 + 0x988),uVar1);
      lVar19 = *(long *)(lVar15 + 0x2e0);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      FUN__text__00165bc8(lVar19,0,*(undefined8 *)(param_1 + 0x988),uVar7);
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      FUN__text__003c8c20(lVar15,&local_e0,0xb);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      goto LAB__text__00285cbc;
    }
    plVar16 = (long *)(lVar18 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    uVar7 = *(undefined4 *)(param_1 + 0x880);
    lVar15 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar18,&local_78,lVar15);
    uVar9 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(param_1 + 0x110,&local_68,uVar9,uVar7);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))(plVar16);
    bVar12 = *(byte *)(lVar8 + 0x58) | 1;
  }
  else {
    if (iVar4 == 2) goto LAB__text__00285bd4;
LAB__text__00285cb0:
    bVar12 = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  *(byte *)(lVar8 + 0x58) = bVar12;
LAB__text__00285cbc:
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  return;
}


