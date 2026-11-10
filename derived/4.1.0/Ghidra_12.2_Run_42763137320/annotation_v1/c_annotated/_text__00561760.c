/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00461760
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561760; name: FUN_.text__00561760
 */


void FUN__text__00561760(long param_1,float *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00561970(param_1,param_2,param_3 << 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar9 = *(float *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    pfVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar5 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = pfVar3[param_3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = uVar5 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (uVar5 & 0xaaaa) >> 1 | (uVar5 & 0x5555) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
        uVar5 = (uint)LZCOUNT((uVar2 >> 8 | (uVar2 & 0xff00ff) << 8) << 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar1 = param_1 + (ulong)uVar5 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = *(float *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(float *)(lVar1 + 0x18) = fVar8;
      fVar9 = (fVar9 - fVar7) + fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4 = pfVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar3 = (*pfVar3 + fVar9) * 0.14705883;
      pfVar3 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pfVar4 < param_2 + param_3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0055f350(param_1 + 4,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(uint *)(param_1 + 0x10) = uVar6;
  *(float *)(param_1 + 0x14) = fVar9;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


