/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C4980
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c4980; name: FUN_.text__006c4980
 */


void FUN__text__006c4980(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar3 = *(char *)(param_1 + 0x109); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ('\0' < cVar3) { // [自动静态注释] 条件判断/分支
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar7 = *(long *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *(long *)(lVar7 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(lVar4 + 0x14) & 3) != 0) { // [自动静态注释] 条件判断/分支
        uVar1 = FUN__text__0069de6c(param_2,*(undefined8 *)(lVar4 + 0x20), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined2 *)(lVar4 + 0x4a));
        if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__006b0fdc(lVar4,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0069de50(param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006b09e8(*(undefined8 *)(lVar7 + lVar6),param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006af484(*(undefined8 *)(lVar7 + lVar6),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
          uVar2 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__006d6610(param_3,param_2,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__0069dbb0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
        cVar3 = *(char *)(param_1 + 0x109); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar5 = lVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 < cVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(param_1 + 0x10a) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0x118)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006af484(*(undefined8 *)(param_1 + 0x118),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006b4e74(param_1,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069dbb0(param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


