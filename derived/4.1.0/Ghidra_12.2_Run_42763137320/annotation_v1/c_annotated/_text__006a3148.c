/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A3148
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3148; name: FUN_.text__006a3148
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__006a3148(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
    return (long *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00699b8c(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar3 = (long *)(*(code *)*_DAT_008a6960)((uVar2 & 0xffff) * 8 + 0x58,4,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__006a8030(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = _DAT_008a6820; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar3 + 10) = 0;
    pcVar4 = *(code **)(lVar1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar3 = lVar1 + 0x10;
    (*pcVar4)(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),lVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar6 = (long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar5 = *plVar6;
    *(long **)(lVar7 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar5;
    *plVar6 = lVar7;
    FUN__text__006a84a0(plVar3,param_4,*(undefined8 *)(param_1 + 0x20),plVar3 + 0xb,param_5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


