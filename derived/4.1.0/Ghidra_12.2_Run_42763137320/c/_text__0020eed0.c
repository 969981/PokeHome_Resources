/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020eed0; name: FUN_.text__0020eed0
 */


void FUN__text__0020eed0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  ulong local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  long local_2f0;
  undefined4 local_2dc;
  byte local_268 [520];
  
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    lVar16 = *(long *)(param_1 + 8);
    lVar14 = lVar16 + 0x110;
    lVar17 = *(long *)(lVar16 + 0x2d0);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    local_268[0] = 0x55;
    local_268[1] = 0x30;
    local_268[2] = 0x43;
    local_268[3] = 0xee;
    local_268[4] = 0x95;
    local_268[5] = 0xd2;
    local_268[6] = 0xe0;
    local_268[7] = 0x6a;
    lVar10 = FUN__text__0012cce4(lVar14,local_268);
    if (lVar10 != 0) {
      memset(local_268,0,0x200);
      uVar3 = (ulong)*(uint *)(lVar19 + 0x70);
      iVar4 = *(int *)(lVar19 + 0x74);
      lVar20 = 0;
      do {
        lVar18 = 0;
        do {
          while( true ) {
            uVar1 = lVar18 + lVar20 * 6;
            FUN__text__003c7c60(lVar17,param_1 + lVar18 * 0xf0 + lVar20 * 0x30 + 0xe28,uVar1 < uVar3
                               );
            lVar15 = param_1 + lVar18 * 0x230 + lVar20 * 0x70 + 0x18;
            lVar11 = FUN__text__0012cb14(lVar14,lVar15);
            if (lVar11 != 0) break;
            if (uVar1 < uVar3) goto LAB__text__0020f0dc;
LAB__text__0020f150:
            FUN__text__003a8078(lVar10,lVar15);
            snprintf((char *)local_268,0x200,(char *)0x7193b0,uVar1 & 0xffffffff);
            local_308 = 0xcbf29ce484222645;
            if (local_268[0] != 0) {
              pbVar13 = (byte *)((ulong)local_268 | 1);
              bVar5 = local_268[0];
              do {
                local_308 = (local_308 ^ bVar5) * 0x100000001b3;
                bVar5 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar5 != 0);
            }
            FUN__text__003c7c60(lVar17,&local_308,0);
            lVar18 = lVar18 + 1;
            if (lVar18 == 6) goto LAB__text__0020ef90;
          }
          *(bool *)(lVar11 + 0x15a) = uVar1 < uVar3;
          if (uVar1 >= uVar3) {
            FUN__text__005e927c(&local_308,0x8701b8);
            lVar6 = local_2f0;
            *(ulong *)(lVar11 + 0x168) = local_308;
            *(undefined8 *)(lVar11 + 0x170) = uStack_300;
            *(undefined8 *)(lVar11 + 0x178) = local_2f8;
            if (local_2f0 != 0) {
              (**(code **)(*(long *)(local_2f0 + 0x48) + 0x10))();
            }
            lVar12 = *(long *)(lVar11 + 0x180);
            *(long *)(lVar11 + 0x180) = lVar6;
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
            }
            if (local_2f0 != 0) {
              (**(code **)(*(long *)(local_2f0 + 0x48) + 0x18))();
            }
            goto LAB__text__0020f150;
          }
LAB__text__0020f0dc:
          if (iVar4 == 0) {
LAB__text__0020efb0:
            uVar9 = 0;
            lVar11 = param_1 + lVar18 * 0xf0 + lVar20 * 0x30;
            lVar15 = lVar11 + 0xe40;
          }
          else {
            iVar21 = 0;
            iVar8 = 0;
            do {
              pbVar13 = (byte *)FUN__text__0020beec(lVar19,uVar1 & 0xffffffff,iVar8);
              iVar8 = iVar8 + 1;
              iVar21 = iVar21 + (uint)*pbVar13;
            } while (iVar4 != iVar8);
            if (iVar21 == 0) goto LAB__text__0020efb0;
            lVar15 = param_1 + lVar18 * 0xf0 + lVar20 * 0x30 + 0xe48;
            if (iVar21 == iVar4) {
              lVar15 = param_1 + lVar18 * 0xf0 + lVar20 * 0x30 + 0xe50;
            }
            lVar11 = 1;
            uVar9 = 1;
          }
          FUN__text__0012c378(lVar11,lVar14,lVar15);
          iVar8 = FUN__text__0020bf30(lVar19,uVar1 & 0xffffffff);
          uVar2 = 0;
          if (iVar8 != 0) {
            uVar2 = uVar9;
          }
          FUN__text__003c7c60(lVar17,param_1 + lVar18 * 0xf0 + lVar20 * 0x30 + 0xe38,uVar2);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 6);
LAB__text__0020ef90:
        lVar20 = lVar20 + 1;
        if (lVar20 == 5) {
          local_308 = 0x8261d09e5b31e27;
          lVar14 = FUN__text__00155100(*(undefined8 *)(lVar16 + 0x2d0),&local_308);
          if (lVar14 != 0) {
            FUN__text__0020b890(&local_308,lVar19);
            uVar7 = FUN__text__0016af80(local_2dc);
            uVar9 = FUN__text__003d5164(uVar7);
            lVar19 = *(long *)(lVar16 + 0x570);
            if (lVar19 != 0) {
              (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
            }
            FUN__text__003d5154(lVar19,uVar9,lVar14,0,0);
            (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
          }
          if (lVar17 != 0) {
            (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
          }
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


