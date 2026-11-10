/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C6808
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c6808; name: FUN_.text__003c6808
 */


void FUN__text__003c6808(long param_1,int param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = param_2 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((10 < (uVar1 & 0xff)) || ((0x7dfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) || // [自动静态注释] 条件判断/分支
      (*(long *)(param_1 + 0x68) == 0)) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(undefined8 *)(*(long *)((long)(char)uVar1 * 8 + 0x73a878) * 8 + 0x883df8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__003e7418(*(undefined8 *)(param_1 + 0x170),uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = (**(code **)(*plVar2 + 0x38))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003e7434(*(undefined8 *)(param_1 + 0x170),plVar2,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = (**(code **)(*param_3 + 0x58))(param_3,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(*(long *)(lVar3 + 0x18) + 8) = plVar2;
  FUN__text__003e716c(*(undefined8 *)(param_1 + 0x170)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


