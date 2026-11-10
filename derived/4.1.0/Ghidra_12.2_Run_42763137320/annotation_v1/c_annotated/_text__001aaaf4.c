/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000AAAF4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aaaf4; name: FUN_.text__001aaaf4
 */


void FUN__text__001aaaf4(long param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (**(int **)(param_1 + 0x38) == 1) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__00196200(uVar3,*(undefined4 *)(param_2 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*param_2 == '\0') { // [自动静态注释] 条件判断/分支
      lVar2 = FUN__text__00195358(uVar3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_40 = *(undefined8 *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = *(undefined8 *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = FUN__text__00192680(uVar1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = FUN__text__0019264c(uVar1,param_2 + 0xc); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar2 + 0x18) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


