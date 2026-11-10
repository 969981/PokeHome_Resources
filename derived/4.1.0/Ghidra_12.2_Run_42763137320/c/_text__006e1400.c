/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e1400; name: FUN_.text__006e1400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006e1400(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[10] = 0;
  lVar2 = _DAT_008a6c28;
  lVar1 = _DAT_008a6b80;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = lVar2 + 0x10;
  param_1[8] = lVar1 + 0x10;
  param_1[9] = 0;
  memset(param_1 + 0x11c,0,0x898);
  FUN__text__006ec4b0(param_1 + 0x263);
  *(undefined1 *)(param_1 + 0x26d) = 0;
  FUN__text__006ee670(param_1 + 0x26e);
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x299] = _DAT_008a6b20 + 0x10;
  FUN__text__006ec4b0(param_1 + 0x29a);
  FUN__text__006ee670(param_1 + 0x2a3);
  param_1[0x2ce] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c9] = (long)(param_1 + 0x2c9);
  param_1[0x2ca] = (long)(param_1 + 0x2c9);
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  param_1[0x2d3] = 0;
  param_1[0x2cb] = (long)(param_1 + 0x2cb);
  param_1[0x2cc] = (long)(param_1 + 0x2cb);
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d8),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2dc),false,0);
  nn::util::ReferSymbol((void *)0x866121);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
                    /* WARNING: Could not recover jumptable at 0x006e1544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_2);
  return;
}


