/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001DC17C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc17c; name: FUN_.text__002dc17c
 */


uint FUN__text__002dc17c(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar8 = param_1[0x2c] & 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(param_1[0x1f] + ((ulong)param_1[0x2c] >> 1 & 0x7ffffffffffffff8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = lVar7 + uVar8 * 0x120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__002f0b64(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__002fa568(uVar3,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = FUN__text__002fa5d8(uVar3,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar2 == 2) { // [自动静态注释] 条件判断/分支
      FUN__text__002fa648(uVar3,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__002fa6b8(uVar3,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 1) = 0;
      lVar6 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = (undefined8 *)(lVar7 + uVar8 * 0x120 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar5 = (code *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__002fa6b8(uVar3,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 1) = 0;
      lVar6 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = (undefined8 *)(lVar7 + uVar8 * 0x120 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar5 = (code *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (pcVar5 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (*pcVar5)(puVar4 + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*param_1 + lVar6 * 8))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002ddf20(param_1 + 0x1e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


