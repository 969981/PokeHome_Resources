/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EE434
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee434; name: FUN_.text__006ee434
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ee434(undefined1 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar2 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = cVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  if (cVar2 == '\0') { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x10) = param_4[1] + param_5;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_54 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
    puVar3 = _DAT_008a5698; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = cVar2 != '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4) { // [自动静态注释] 条件判断/分支
      uVar5 = 0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4) { // [自动静态注释] 条件判断/分支
      uVar6 = 0x25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = _DAT_008a6fe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar4) { // [自动静态注释] 条件判断/分支
      puVar1 = _DAT_008a6fe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (*(code *)*_DAT_008a5698)(*param_2,uVar5,&local_54); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar3)(*param_2,uVar6,&local_58); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x10),*param_4,param_5,*(undefined4 *)(param_3 + 4) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 8) = local_54;
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = param_1[2] & 0xfe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


