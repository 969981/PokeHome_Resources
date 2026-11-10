/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063758c; name: FUN_.text__0063758c
 */


uint FUN__text__0063758c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 local_2e4 [2];
  undefined2 local_2e2;
  undefined2 local_2e0;
  undefined2 local_2de;
  undefined2 local_2dc;
  undefined2 local_2da;
  undefined2 local_2d8;
  undefined1 auStack_2d6 [662];
  
  memset(auStack_2d6,0,0x296);
  FUN__text__00631194(param_1,auStack_2d6);
  FUN__text__00604e94(auStack_2d6,2);
  uVar1 = FUN__text__00632ee0(param_1);
  local_2e4[0] = FUN__text__00632408(param_1);
  local_2e2 = FUN__text__006363fc(param_1,0);
  local_2e0 = FUN__text__006363fc(param_1,1);
  local_2de = FUN__text__006363fc(param_1,2);
  local_2dc = FUN__text__006363fc(param_1,5);
  local_2da = FUN__text__006363fc(param_1,3);
  local_2d8 = FUN__text__006363fc(param_1,4);
  FUN__text__006331e0(param_1,uVar1 & 1);
  uVar1 = FUN__text__0060478c(param_2,param_2 + 0x148,auStack_2d6,local_2e4);
  return uVar1 & 1;
}


