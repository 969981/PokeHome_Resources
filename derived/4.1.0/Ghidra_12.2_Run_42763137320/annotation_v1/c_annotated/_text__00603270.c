/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：operator()
 * 用途/行为：Ghidra 保留符号名称 operator()；调用者与业务副作用需独立复核
 * 证据等级：SYMBOL_EVIDENCE；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00603270; name: operator()
 */


/* int 
   std::uniform_int_distribution<int>::TEMPNAMEPLACEHOLDERVALUE(std::mersenne_twister_engine<unsigned
   int, 32ul, 624ul, 397ul, 31ul, 2567483615u, 11ul, 4294967295u, 7ul, 2636928640u, 15ul,
   4022730752u, 18ul, 1812433253u>&, std::uniform_int_distribution<int>::param_type const&) */

int __thiscall // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
std::uniform_int_distribution<int>::operator() // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (uniform_int_distribution<int> *this,mersenne_twister_engine *param_1,param_type *param_2) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar4 = *(int *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar4 - *(int *)param_2 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = (iVar4 - *(int *)param_2) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
      lVar8 = *(long *)(param_1 + 0x9c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = (lVar8 + 1U) % 0x270; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + lVar8 * 4) =
           *(uint *)(param_1 + ((lVar8 + 0x18dU) % 0x270) * 4) ^
           (*(uint *)(param_1 + uVar6 * 4) & 0x7ffffffe | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           *(uint *)(param_1 + lVar8 * 4) & 0x80000000) >> 1 ^
           -(*(uint *)(param_1 + uVar6 * 4) & 1) & 0x9908b0df; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar1 = *(uint *)(param_1 + *(long *)(param_1 + 0x9c0) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x9c0) = uVar6;
      uVar1 = uVar1 ^ uVar1 >> 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar1 ^ uVar1 >> 0x12; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar8 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) { // [自动静态注释] 条件判断/分支
      lVar8 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = lVar8 - LZCOUNT(uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar5 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar5 & 0x1f) != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = ((uint)uVar5 & 0xff) / ((uint)uVar6 & 0xff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = *(ulong *)(param_1 + 0x9c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 <= uVar5) { // [自动静态注释] 条件判断/分支
      uVar2 = 0xffffffff >> (ulong)(-uVar3 & 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      lVar8 = uVar7 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = uVar7 + 0x18d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = (uVar7 + 1) % 0x270; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + lVar8) =
           *(uint *)(param_1 + (uVar6 % 0x270) * 4) ^
           (*(uint *)(param_1 + uVar7 * 4) & 0x7ffffffe | *(uint *)(param_1 + lVar8) & 0x80000000) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           >> 1 ^ -(*(uint *)(param_1 + uVar7 * 4) & 1) & 0x9908b0df; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = *(uint *)(param_1 + *(long *)(param_1 + 0x9c0) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong *)(param_1 + 0x9c0) = uVar7;
      uVar3 = uVar3 ^ uVar3 >> 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (uVar3 ^ uVar3 >> 0x12) & uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 <= uVar3); // [自动静态注释] 循环/迭代
    iVar4 = *(int *)param_2 + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


