/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003078FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004078fc; name: FUN_.text__004078fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004078fc(float param_1,float param_2,long param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = *(float *)(param_3 + 0x4c8) * param_1 * *_DAT_008a49c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_34 = *(float *)(param_3 + 0x4cc) * param_2 * _DAT_008a49c8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004079cc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_3 + 0x88) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00407430(param_3,param_4,param_5,param_6,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = *(long **)(param_3 + 0x4c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_3 + 0x559) == '\0') { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0x68))(local_38,fStack_34,plVar1,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar1 + 0x70))(plVar1,param_4,param_5,param_6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


