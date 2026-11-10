/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004058b0; name: FUN_.text__004058b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004058b0(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = _DAT_008aafc8;
  uVar9 = _DAT_008aafc4;
  uVar8 = _DAT_008aafc0;
  uVar7 = _DAT_008aafbc;
  uVar6 = _DAT_008aafb8;
  uVar5 = _DAT_008aafb4;
  uVar4 = _DAT_008aafb0;
  uVar3 = _DAT_008aafac;
  if ((int)_DAT_008aafac < 0) {
LAB__text__004058ec:
    if ((int)_DAT_008aafb0 < 0) {
LAB__text__00405930:
      if ((int)_DAT_008aafb4 < 0) {
LAB__text__00405970:
        if ((int)_DAT_008aafb8 < 0) {
LAB__text__004059b0:
          if ((int)_DAT_008aafbc < 0) {
LAB__text__004059f0:
            if ((int)_DAT_008aafc0 < 0) {
LAB__text__00405a30:
              if ((int)_DAT_008aafc4 < 0) {
LAB__text__00405a70:
                if ((int)_DAT_008aafc8 < 0) {
                  return 0xffffffff;
                }
                uVar11 = (_DAT_008aafc8 | 7) + 0x80 | 0x80000000;
                do {
                  if (_DAT_008aafc8 != uVar10) {
                    ClearExclusiveLocal();
                    return 0xffffffff;
                  }
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(0x8aafc8,0x10);
                  if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _DAT_008aafc8 = uVar11;
                  }
                } while (cVar1 != '\0');
              }
              else {
                uVar11 = (_DAT_008aafc4 | 6) + 0x80 | 0x80000000;
                do {
                  if (_DAT_008aafc4 != uVar9) {
                    ClearExclusiveLocal();
                    goto LAB__text__00405a70;
                  }
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(0x8aafc4,0x10);
                  if (bVar2) {
                    cVar1 = ExclusiveMonitorsStatus();
                    _DAT_008aafc4 = uVar11;
                  }
                } while (cVar1 != '\0');
              }
            }
            else {
              uVar11 = (_DAT_008aafc0 | 5) + 0x80 | 0x80000000;
              do {
                if (_DAT_008aafc0 != uVar8) {
                  ClearExclusiveLocal();
                  goto LAB__text__00405a30;
                }
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(0x8aafc0,0x10);
                if (bVar2) {
                  cVar1 = ExclusiveMonitorsStatus();
                  _DAT_008aafc0 = uVar11;
                }
              } while (cVar1 != '\0');
            }
          }
          else {
            uVar11 = (_DAT_008aafbc | 4) + 0x80 | 0x80000000;
            do {
              if (_DAT_008aafbc != uVar7) {
                ClearExclusiveLocal();
                goto LAB__text__004059f0;
              }
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(0x8aafbc,0x10);
              if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                _DAT_008aafbc = uVar11;
              }
            } while (cVar1 != '\0');
          }
        }
        else {
          uVar11 = (_DAT_008aafb8 | 3) + 0x80 | 0x80000000;
          do {
            if (_DAT_008aafb8 != uVar6) {
              ClearExclusiveLocal();
              goto LAB__text__004059b0;
            }
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x8aafb8,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              _DAT_008aafb8 = uVar11;
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        uVar11 = (_DAT_008aafb4 | 2) + 0x80 | 0x80000000;
        do {
          if (_DAT_008aafb4 != uVar5) {
            ClearExclusiveLocal();
            goto LAB__text__00405970;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x8aafb4,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            _DAT_008aafb4 = uVar11;
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      uVar11 = (_DAT_008aafb0 | 1) + 0x80 | 0x80000000;
      do {
        if (_DAT_008aafb0 != uVar4) {
          ClearExclusiveLocal();
          goto LAB__text__00405930;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x8aafb0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          _DAT_008aafb0 = uVar11;
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    uVar11 = _DAT_008aafac + 0x80 | 0x80000000;
    do {
      if (_DAT_008aafac != uVar3) {
        ClearExclusiveLocal();
        goto LAB__text__004058ec;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x8aafac,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        _DAT_008aafac = uVar11;
      }
    } while (cVar1 != '\0');
  }
  *param_1 = uVar11;
  return 0;
}


