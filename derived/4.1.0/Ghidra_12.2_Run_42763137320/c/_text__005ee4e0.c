/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ee4e0; name: FUN_.text__005ee4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ee4e0(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  undefined8 uStack_178;
  ulong local_170;
  ulong local_168;
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  
  local_1a0 = *(long *)(param_1 + 8);
  FUN__text__0014f410(&local_170,local_1a0,&local_1a0);
  if (*(long *)(param_1 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 600) + 0x48) + 0x18))();
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  *(ulong *)(param_1 + 600) = local_170;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = _DAT_0089f4c8 + 0x10;
  local_168 = 0;
  FUN__text__0010c3b0(&local_1a0,_DAT_0089f558,0x70b6f0,0x70f683);
  lVar12 = *_DAT_0089f550;
  lVar15 = *(long *)(lVar12 + 8);
  if (*(long *)(lVar12 + 0x1c8) != 0) {
    lVar15 = *(long *)(lVar12 + 0x1c8);
  }
  FUN__text__0010a590(&local_1c0,lVar12,0,&local_1a0,0,lVar15,0);
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  local_168 = local_1c0;
  if (local_1c0 != 0) {
    plVar16 = (long *)(local_1c0 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    if (local_160 != 0 || local_e0 != 0) {
      FUN__text__005d9010(local_1c0,&local_170,1);
    }
    FUN__text__005d8de0(local_1c0);
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))(plVar16);
  }
  if ((local_188 != 0) && (local_1a0 != 0)) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = 0;
  uStack_198 = 0xcbf29ce484222645;
  local_190 = 0x70f683;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  lVar15 = *(long *)(param_1 + 600);
  FUN__text__005a2048(&local_1a0,*(undefined8 *)(lVar15 + 8),1);
  FUN__text__0014f530(lVar15,&local_170,&local_1a0);
  local_170 = _DAT_0089f4a8 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar9 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    uVar11 = local_168;
    local_168 = 0;
    pcVar9 = local_d8;
    if (uVar11 != 0) {
      (**(code **)(*(long *)(uVar11 + 0x48) + 0x18))();
      pcVar9 = local_d8;
    }
  }
  local_d8 = pcVar9;
  if (pcVar9 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar9)(auStack_c0);
  }
  pcVar9 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar9)(&local_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  local_1b8 = 0;
  local_1c0 = 0xffffffff00000002;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  *(undefined4 *)(*(long *)(param_1 + 600) + 0xf8) = 3;
  local_1b0 = 0xffffffff00000001;
  FUN__text__00153ebc(*(undefined8 *)(param_1 + 600),&local_1c0,4);
  lVar12 = *(long *)(param_1 + 600);
  local_1a0 = CONCAT44(local_1a0._4_4_,6);
  local_170 = *(ulong *)(*_DAT_008a0228 + 0x10);
  lVar15 = FUN__text__00150170(&local_1e0,*(undefined8 *)(lVar12 + 8),&local_1a0,&local_170);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar12 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar12 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(lVar12 + 0xf0) = lVar15;
  lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 600) + 0xe8) + 0x98) + 0x58);
  puVar13 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar15);
  *(undefined4 *)(puVar13 + 2) = 0;
  *puVar13 = 0xbf800000bf800000;
  puVar13[1] = 0;
  puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar15 + 0x68));
  *(undefined4 *)(puVar13 + 2) = 0;
  *puVar13 = 0xbf8000003f800000;
  puVar13[1] = 0x3f80000000000000;
  puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar15 + 0x68));
  *puVar13 = 0x3f800000bf800000;
  puVar13[1] = 0;
  *(undefined4 *)(puVar13 + 2) = 0x3f800000;
  puVar13 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar15 + 0x68));
  *puVar13 = 0x3f8000003f800000;
  puVar13[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar13 + 2) = 0x3f800000;
  thunk_FUN__text__006ec608(lVar15);
  lVar15 = *(long *)(*(long *)(param_1 + 600) + 0xf0) + 0x58;
  puVar13 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar15);
  *puVar13 = 0x2000200010000;
  *(undefined4 *)(puVar13 + 1) = 0x30001;
  thunk_FUN__text__006ec608(lVar15);
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_170 = 0;
  local_168 = 0;
  FUN__text__006ebd70(&local_170);
  local_170 = local_170 & 0xfffffffcffffffff;
  FUN__text__005bca50(*(undefined8 *)(param_1 + 600),&local_170);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN__text__006ebd10(&local_1e0);
  uVar10 = (undefined1)local_1e0;
  local_180 = 0;
  uStack_178 = 0;
  local_1e0 = CONCAT26(local_1e0._6_2_,0x10000070600);
  local_1e0 = CONCAT71(local_1e0._1_7_,uVar10) | 1;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN__text__006ebd38(&local_1a0);
  FUN__text__005bcaa0(*(undefined8 *)(param_1 + 600),&local_1a0,&local_1e0);
  lVar12 = *(long *)(param_1 + 600);
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  lVar15 = *(long *)(param_1 + 0x150);
  if (lVar15 == 0) {
    *(undefined8 *)(lVar12 + 0x80) = uVar3;
    *(undefined8 *)(lVar12 + 0x88) = uVar5;
    lVar14 = *(long *)(lVar12 + 0x98);
    *(undefined8 *)(lVar12 + 0x90) = uVar4;
    *(undefined8 *)(lVar12 + 0x98) = 0;
  }
  else {
    plVar16 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    *(undefined8 *)(lVar12 + 0x80) = uVar3;
    *(undefined8 *)(lVar12 + 0x88) = uVar5;
    *(undefined8 *)(lVar12 + 0x90) = uVar4;
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar14 = *(long *)(lVar12 + 0x98);
    *(long *)(lVar12 + 0x98) = lVar15;
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  FUN__text__005c5e00(param_2,param_1);
  FUN__text__005c60c0(param_2,*(undefined8 *)(param_1 + 600));
  lVar15 = *(long *)(*(long *)(param_1 + 600) + 0x70);
  do {
    lVar12 = lVar15;
    lVar15 = *(long *)(lVar12 + 0x120);
  } while (lVar15 != 0 && lVar15 != lVar12);
  if ((*(byte *)(lVar12 + 0x130) >> 6 & 1) != 0) {
    if ((((*(byte *)(lVar12 + 0x1d0) & 1) == 0) || (*(byte *)(lVar12 + 0x1ca) == 0x4f)) ||
       (uVar3 = tpidr_el0, (uint)*(byte *)(lVar12 + 0x1ca) != ((uint)uVar3 >> 0xd & 0x4f))) {
      uVar3 = tpidr_el0;
      bVar8 = (byte)((uint)uVar3 >> 0xd) & 0x4f;
      pbVar1 = (byte *)(lVar12 + 0x1ca);
      while (*pbVar1 == 0x4f) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *pbVar1 = bVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__005eeaa4;
      }
      pcVar2 = (char *)(lVar12 + 0x1cb);
      ClearExclusiveLocal();
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar7) {
          *pcVar2 = *pcVar2 + '\x01';
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      do {
        if (*pbVar1 != 0x4f) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1c8));
            while (*pbVar1 == 0x4f) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
              if (bVar7) {
                *pbVar1 = bVar8;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB__text__005eea94;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *pbVar1 = bVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB__text__005eea94:
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar7) {
          *pcVar2 = *pcVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB__text__005eeaa4:
      FUN__text__005eeddc(lVar12 + 0x158,param_1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *pbVar1 = 0x4f;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      if (*(char *)(lVar12 + 0x1cb) == '\0') {
        return;
      }
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1c8));
      return;
    }
    FUN__text__005eeddc(lVar12 + 400,param_1);
  }
  return;
}


