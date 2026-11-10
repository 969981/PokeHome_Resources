/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018E160
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028e160; name: FUN_.text__0028e160
 */


void FUN__text__0028e160(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = *(ulong *)(*(long *)(param_2 + 0xb0) + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = (int)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar6 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(uint *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      local_70 = (int)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_6c = local_70 - (iVar6 - 1U >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar12 = *(float *)(param_2 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = *(float *)(param_2 + 0x204); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      for (fVar9 = fVar12 + param_1 + *(float *)(param_2 + 0xac) * (float)(int)uStack_6c; // [自动静态注释] 循环/迭代
          fVar9 < fVar12 - fVar10 * 0.5; fVar9 = fVar9 + fVar10) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_6c = uStack_6c + iVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      for (; fVar12 + fVar10 * 0.5 <= fVar9; fVar9 = fVar9 - fVar10) { // [自动静态注释] 循环/迭代
        uStack_6c = uStack_6c - iVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar11 = *(undefined4 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(*(long *)(param_2 + 0xb8) + uVar8 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 0xb0) + 0xe0) + uVar8 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = plVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(float *)(lVar2 + 0x30) = fVar9;
      *(undefined4 *)(lVar2 + 0x34) = uVar11;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      iVar5 = uStack_6c - uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uStack_6c = uVar3 + uStack_6c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar5 = iVar5 + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar5 < 0); // [自动静态注释] 循环/迭代
      do { // [自动静态注释] 循环/迭代
        uStack_6c = uStack_6c - uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 <= uStack_6c); // [自动静态注释] 循环/迭代
      *(uint *)(*(long *)(param_2 + 0xb8) + uVar8 * 4) = uStack_6c;
      if ((uVar4 != uStack_6c) && (*(code **)(param_2 + 0xf0) != (code *)0x0)) { // [自动静态注释] 条件判断/分支
        (**(code **)(param_2 + 0xf0))(param_2 + 0x110,&local_68,&uStack_6c,&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar8 != (uVar7 & 0xffffffff)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_2 + 0x1f8) = param_1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


