/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000A0C78
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0c78; name: FUN_.text__001a0c78
 */


void FUN__text__001a0c78(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_38 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(undefined8 *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__001c1fa4(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  **(undefined4 **)(lVar4 + 0x50) = uVar1;
  if (**(int **)(lVar4 + 0x50) != 0) { // [自动静态注释] 条件判断/分支
    local_24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_2c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__001c1fdc(uVar3,&local_24,local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00191328(&local_54,local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = *(undefined8 **)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar2 + 2) = local_44;
    *puVar2 = local_54;
    puVar2[1] = local_4c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


