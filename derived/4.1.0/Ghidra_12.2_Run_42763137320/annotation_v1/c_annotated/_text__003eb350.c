/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EB350
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb350; name: FUN_.text__003eb350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003eb350(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 2) = param_3;
  puVar1 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__003e73fc(param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00699a30(puVar1,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00699b8c(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar9 = (uint)*(ushort *)(*(long *)(param_1 + 6) + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = FUN__text__00699ba4(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = (ulong)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar7 = FUN__text__0069e6c0(*(undefined8 *)(param_2 + 0x20),lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = FUN__text__00699bc0(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar4 = FUN__text__00699c10(puVar1,lVar7,uVar3 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar9 = iVar4 + uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = lVar6 + 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = uVar10 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar10 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = *(long **)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = FUN__text__003e751c(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*plVar8 + 0x48))(plVar8,_DAT_008a0448,uVar5,*(undefined8 *)(param_1 + 6),uVar9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = 1;
  param_1[0xc] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


