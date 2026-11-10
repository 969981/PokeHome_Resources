/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006013f0; name: FUN_.text__006013f0
 */


void FUN__text__006013f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = DAT_00c15ce0;
  uVar2 = FUN__text__005ff324(param_1,param_2,0);
  uVar3 = FUN__text__00601980(DAT_00c15d00,uVar2,uVar1);
  if ((uVar3 & 1) == 0) {
    FUN__text__00601534(uVar1,uVar2);
    FUN__text__00601a20(DAT_00c15d00,uVar1);
    return;
  }
  return;
}


