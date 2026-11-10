/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0017F068
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027f068; name: FUN_.text__0027f068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0027f068(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0xb8) == 0) || (uVar5 = FUN__text__001155b0(), (uVar5 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    iVar4 = FUN__text__0015ab30(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = *(uint *)(param_1 + 0xac0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 1) { // [自动静态注释] 条件判断/分支
      local_40 = 0x1d6021ebfcbdd9ae; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = 0x720c77; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *(long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        lVar6 = _DAT_008a1760 + (long)iVar4 * 0x2c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((int)uVar2 < 10) { // [自动静态注释] 条件判断/分支
          uVar3 = uVar2 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar1 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((int)uVar3 < 0) { // [自动静态注释] 条件判断/分支
            uVar1 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar3 = uVar3 - (uVar1 & 0xfffffffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar3 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0027f17c */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__0027f188 + (ulong)*(byte *)((ulong)uVar3 + 0x72d3e6) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(undefined1 *)(param_1 + 0xac4) = 1;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined1 *)(param_1 + 0xac4) = 1;
          if (0x2d < uVar2) goto LAB__text__0027f224; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        uVar1 = uVar2 - 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = uVar2 - 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (-1 < (int)uVar1) { // [自动静态注释] 条件判断/分支
          uVar2 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar1 = uVar1 - (uVar2 & 0xfffffffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0027f1ec */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0027f200 + (ulong)*(byte *)((ulong)uVar1 + 0x72d3ea) * 4))(lVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
LAB__text__0027f224: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)(param_1 + 0xac5) = 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      local_40 = 0x153e92b540c06ce1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = 0x71ccbf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *(long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_30 = 0x16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00115454(lVar6,&local_40,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_28 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0xac0) = *(int *)(param_1 + 0xac0) + 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


