/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EE2AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee2ac; name: FUN_.text__006ee2ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006ee2ac(undefined8 *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_18 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a5698; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar1 == '\0') { // [自动静态注释] 条件判断/分支
    return (long)*(int *)(param_2 + 4) << 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 == '\x02') { // [自动静态注释] 条件判断/分支
    local_18[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)*_DAT_008a5698)(*param_1,0x12,local_18 + 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar6 = (code *)*puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (cVar1 != '\x01') { // [自动静态注释] 条件判断/分支
      lVar4 = nn::detail::UnexpectedDefaultImpl(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_18[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)*_DAT_008a5698)(*param_1,0x11,local_18 + 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar6 = (code *)*puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_18[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*pcVar6)(uVar3,uVar5,local_18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return (long)local_18[0] * (long)*(int *)(param_2 + 4); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


