/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018DFC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028dfc0; name: FUN_.text__0028dfc0
 */


void FUN__text__0028dfc0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = (long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xb0) + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar5 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(long *)(param_1 + 0xc0) - *plVar4 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x20c) = (int)uVar5 - 1U >> 1;
  *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0xac) * fVar7;
  *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0xac) * (float)(uVar5 & 0xffffffff);
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) { // [自动静态注释] 条件判断/分支
    if (uVar6 < uVar1) { // [自动静态注释] 条件判断/分支
      *(ulong *)(param_1 + 0xc0) = *plVar4 + uVar6 * 4;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0028e860(plVar4,uVar6 - uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar5 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (2 < uVar6 - 1) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        lVar3 = lVar2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar2 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*plVar4 + lVar3) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 4) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 8) = 0xffffffff;
        *(undefined4 *)(*plVar4 + lVar3 + 0xc) = 0xffffffff;
      } while (uVar6 - uVar5 != lVar2); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = lVar2 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(*plVar4 + lVar2) = 0xffffffff;
        lVar2 = lVar2 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar5 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0028e160(0,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(*(long *)(param_1 + 0xb0) + 0xe0) + (ulong)*(uint *)(param_1 + 0x20c) * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = *(undefined8 *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = *(undefined8 *)(lVar2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x98) + 0x98))(0,*(long **)(param_1 + 0x98),&uStack_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(**(long **)(param_1 + 0x98) + 0x80))(*(long **)(param_1 + 0x98),&uStack_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),&local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


