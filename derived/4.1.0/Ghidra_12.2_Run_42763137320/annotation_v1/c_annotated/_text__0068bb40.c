/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058BB40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068bb40; name: FUN_.text__0068bb40
 */


undefined8 FUN__text__0068bb40(uint *param_1,undefined8 param_2,undefined4 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebbe4(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50._4_4_ = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006ec37c(param_2,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (*(char *)((long)param_3 + 0x39) == '\0') { // [自动静态注释] 条件判断/分支
    uVar2 = *(undefined8 *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 6) = uVar2;
    local_50 = CONCAT44(local_50._4_4_,(int)uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = param_3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[10] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (**(code **)(param_3 + 10))((ulong)uVar1 * 0x48,4,*(undefined8 *)(param_3 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar2 = (**(code **)(param_3 + 10))((ulong)param_1[10] << 4,4,*(undefined8 *)(param_3 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 4) = uVar2;
    if (param_1[10] != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__006ec4b0(*(long *)(param_1 + 2) + lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006ec4cc(*(long *)(param_1 + 2) + lVar4,param_2,&local_50, // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(undefined8 *)(param_3 + 6),
                            *(long *)(param_3 + 8) +
                            ((*(long *)(param_1 + 6) + *(long *)(param_1 + 8)) - 1U & // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                            -*(long *)(param_1 + 8)) * uVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__006ec64c(*(long *)(param_1 + 2) + lVar4,*(long *)(param_1 + 4) + lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar4 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = lVar3 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar5 < param_1[10]); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_3 + 0xe) != '\0') { // [自动静态注释] 条件判断/分支
      *param_1 = *param_1 | 1;
      uVar2 = (**(code **)(param_3 + 10))(8,4,*(undefined8 *)(param_3 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      uVar2 = (**(code **)(param_3 + 10))(8,4,*(undefined8 *)(param_3 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x12) = uVar2;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = *param_1 | 2;
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


