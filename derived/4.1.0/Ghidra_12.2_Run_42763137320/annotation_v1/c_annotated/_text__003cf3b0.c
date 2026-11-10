/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CF3B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf3b0; name: FUN_.text__003cf3b0
 */


bool FUN__text__003cf3b0(long param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_30 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_28 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x20060) != '\0') { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x20060) = 0;
    do { // [自动静态注释] 循环/迭代
      uVar2 = FUN__text__003d444c(*(undefined8 *)(param_1 + 0x20048)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } while ((uVar2 & 1) == 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::account::LoadProfileImage // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((ulong *)(param_1 + 0x20020),(void *)(param_1 + 0x1c),0x20000,(Uid *)&local_30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  iVar1 = FUN__text__003d43e8(*(undefined8 *)(param_1 + 0x20048),(void *)(param_1 + 0x1c), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(ulong *)(param_1 + 0x20020));
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x20060) = 1;
    return true; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


